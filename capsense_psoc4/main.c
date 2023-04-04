#include "cy_pdl.h"
#include "cybsp.h"
#include "cycfg.h"
#include "cycfg_capsense.h"
#include "cy_gpio.h"

#define CAPSENSE_INTR_PRIORITY    (2u)
#define UART_INTR_PRIORITY        (3u)
#define CY_ASSERT_FAILED          (0u)

cy_stc_scb_uart_context_t uart_context;

static void initialize_capsense(void);
static void capsense_isr(void);

#define MAX_S 11

uint8_t touch[MAX_S] = {0};
uint8_t send_touch[MAX_S] = {0};
uint8_t last_touch[MAX_S] = {0};
uint8_t reset_status = 0;

void handle_error(void){
	/* Disable all interrupts */
	__disable_irq();
	while(1){}
}


int main(void) {
	cy_rslt_t result;

	/* Initialize the device and board peripherals */
	result = cybsp_init();
	if (result != CY_RSLT_SUCCESS) {
		CY_ASSERT(0);
	}

	/* Enable global interrupts */
	__enable_irq();

	Cy_SCB_UART_Init(CYBSP_UART_HW, &CYBSP_UART_config, &uart_context);
	Cy_SCB_UART_Enable(CYBSP_UART_HW);

	/* Initialize CapSense */
	initialize_capsense();

	/* Start the first scan */
	Cy_CapSense_ScanAllWidgets(&cy_capsense_context);

	/* StartUp LED */
	for (int i = 0; i < 10; i++) {
		Cy_GPIO_Write(P1_2_PORT, P1_2_NUM, 1);
		Cy_SysLib_Delay(50);
		Cy_GPIO_Write(P1_2_PORT, P1_2_NUM, 0);
		Cy_SysLib_Delay(50);
	}
	uint8 rcv = 0;
	while(rcv != 'A'){
		rcv = Cy_SCB_UART_Get(CYBSP_UART_HW);
		Cy_CapSense_CalibrateAllWidgets(&cy_capsense_context);
		Cy_GPIO_Write(P1_2_PORT, P1_2_NUM, 1);
		Cy_SysLib_Delay(250);
		Cy_GPIO_Write(P1_2_PORT, P1_2_NUM, 0);
		Cy_SysLib_Delay(250);
	};
	Cy_CapSense_CalibrateAllWidgets(&cy_capsense_context);

	for (;;) {
		if (CY_CAPSENSE_NOT_BUSY == Cy_CapSense_IsBusy(&cy_capsense_context)) {
			/* Process all widgets */
			Cy_CapSense_ProcessAllWidgets(&cy_capsense_context);


			for (int i = 0; i < MAX_S; i++) {
				/* Turning ON/OFF based on button status */
				if (0 != Cy_CapSense_IsWidgetActive(i, &cy_capsense_context)) {
					touch[i] = 1;
				} else {
					touch[i] = 0;
				}
			}

			Cy_CapSense_ScanAllWidgets(&cy_capsense_context);
		}

		// HEADER
		while(Cy_SCB_UART_Put(CYBSP_UART_HW, 0xff)!=1UL);
		while(Cy_SCB_UART_Put(CYBSP_UART_HW, ',')!=1UL);

		for(int i=0; i<MAX_S; i++){
			if(last_touch[i] != touch[i]){
				send_touch[i] = touch[i];
			}else{
				send_touch[i] = 0;
			}
			while(Cy_SCB_UART_Put(CYBSP_UART_HW, '0'+send_touch[i])!=1UL);
			if(i>=0 && i<=(MAX_S-2)){
				while(Cy_SCB_UART_Put(CYBSP_UART_HW, ',')!=1UL);
			}
			last_touch[i] = touch[i];
		}
		while(Cy_SCB_UART_Put(CYBSP_UART_HW, '\n')!=1UL);

		// BUTTON Input
		if(1UL != Cy_GPIO_Read(P0_6_PORT, P0_6_NUM)){
			// ON
			/* StartUp LED */
			for (int i = 0; i < 4; i++) {
				Cy_CapSense_CalibrateAllWidgets(&cy_capsense_context);
				Cy_GPIO_Write(P1_2_PORT, P1_2_NUM, 1);
				Cy_SysLib_Delay(250);
				Cy_GPIO_Write(P1_2_PORT, P1_2_NUM, 0);
				Cy_SysLib_Delay(250);
			}

		}


		//		Cy_SysLib_Delay(5);
	}

}

// CAPSENSE
static void initialize_capsense(void) {
	cy_capsense_status_t status = CY_CAPSENSE_STATUS_SUCCESS;
	const cy_stc_sysint_t capsense_interrupt_config = {
			.intrSrc = CYBSP_CSD_IRQ,
			.intrPriority = CAPSENSE_INTR_PRIORITY,
	};

	status = Cy_CapSense_Init(&cy_capsense_context);

	if (CY_CAPSENSE_STATUS_SUCCESS == status) {
		Cy_SysInt_Init(&capsense_interrupt_config, capsense_isr);
		NVIC_ClearPendingIRQ(capsense_interrupt_config.intrSrc);
		NVIC_EnableIRQ(capsense_interrupt_config.intrSrc);
		status = Cy_CapSense_Enable(&cy_capsense_context);
	}

	if(status != CY_CAPSENSE_STATUS_SUCCESS)
	{
		/* This status could fail before tuning the sensors correctly.
		 * Ensure that this function passes after the CapSense sensors are tuned
		 * as per procedure give in the Readme.md file */
	}
}

static void capsense_isr(void) {
	Cy_CapSense_InterruptHandler(CYBSP_CSD_HW, &cy_capsense_context);
}


