#ifndef WAVETABLE1_H
#define	WAVETABLE1_H

#define POT1	6
#define ENVPOT1	6

static const int8_t wt_attak1[] = {
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,-1,-1,
	-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,1,
	1,1,1,1,1,2,2,2,2,2,2,2,2,2,3,3,
	3,3,3,3,3,3,3,3,3,5,5,5,5,5,5,5,
	6,6,6,6,7,7,7,9,9,10,10,11,11,13,13,14,
	14,15,15,17,17,18,18,19,20,20,22,22,23,24,24,26,
	27,28,30,30,31,32,34,35,36,37,39,40,41,43,44,45,
	47,48,49,51,51,52,53,54,54,56,56,57,57,58,58,58,
	60,60,60,60,60,60,60,60,61,61,61,61,61,61,61,61,
	61,60,60,60,60,60,60,60,60,60,60,60,60,58,58,58,
	57,57,56,56,54,53,53,52,52,51,51,49,49,48,48,48,
	47,47,45,45,45,44,44,44,43,43,43,41,41,41,40,39,
	39,39,37,37,36,36,35,34,34,32,32,31,30,30,28,28,
	27,26,26,24,24,23,22,22,20,20,19,18,18,17,15,14,
	14,13,11,11,10,9,7,7,6,5,3,2,1,0,-1,-2,
	-3,-5,-7,-9,-10,-13,-14,-15,-18,-19,-22,-24,-26,-28,-30,-31,
	-34,-35,-37,-39,-41,-43,-45,-47,-49,-51,-53,-56,-57,-60,-61,-64,
	-65,-68,-70,-72,-74,-75,-78,-79,-83,-85,-87,-89,-91,-92,-95,-96,
	-99,-100,-102,-104,-106,-107,-108,-109,-111,-112,-113,-115,-116,-117,-117,-119,
	-120,-120,-121,-121,-121,-123,-123,-123,-124,-124,-124,-124,-124,-124,-125,-125,
	-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,-125,
	-125,-125,-127,-127,-127,-125,-125,-125,-125,-125,-125,-125,-124,-124,-124,-123,
	-123,-123,-121,-121,-120,-120,-119,-119,-117,-116,-116,-115,-115,-113,-112,-112,
	-111,-109,-108,-107,-106,-104,-103,-102,-100,-99,-96,-95,-94,-92,-90,-89,
	-86,-85,-82,-81,-78,-77,-74,-73,-70,-68,-66,-64,-62,-60,-57,-54,
	-53,-51,-48,-47,-44,-43,-40,-39,-36,-35,-32,-31,-28,-27,-24,-23,
	-20,-19,-17,-15,-14,-11,-10,-9,-6,-5,-3,-1,1,2,5,6,
	9,10,13,14,17,19,20,23,24,27,30,31,34,35,37,40,
	41,44,47,48,51,53,54,57,60,62,65,68,69,72,74,75,
	78,81,82,85,86,89,91,92,95,96,99,100,102,103,106,107,
	108,109,111,112,113,115,116,117,119,119,120,121,121,123,123,124,
	124,124,125,125,125,127,127,127,127,127,127,127,127,127,127,127,
	127,127,127,127,127,127,125,125,125,125,125,125,124,124,124,124,
	124,123,123,123,123,123,121,121,121,121,120,120,120,119,119,119,
	117,117,116,116,115,115,113,113,112,112,111,111,109,109,108,107,
	107,106,104,103,102,100,99,98,96,95,94,92,91,89,87,86,
	83,82,79,78,77,74,73,70,69,66,65,62,61,58,57,54,
	53,51,49,47,45,43,41,39,37,36,34,32,30,27,26,24,
	22,20,19,17,15,14,11,10,9,6,5,3,2,0,-1,-2,
	-3,-6,-7,-9,-11,-13,-14,-17,-18,-19,-22,-24,-26,-27,-30,-31,
	-32,-35,-36,-37,-40,-41,-43,-45,-47,-48,-49,-52,-53,-54,-57,-58,
	-60,-61,-64,-65,-66,-68,-70,-72,-74,-75,-77,-78,-79,-82,-83,-85,
	-86,-87,-89,-90,-91,-92,-94,-95,-96,-96,-98,-99,-100,-100,-102,-103,
	-103,-104,-106,-106,-107,-107,-108,-108,-109,-109,-111,-111,-111,-112,-112,-112,
	-113,-113,-113,-115,-115,-115,-116,-116,-116,-116,-117,-117,-117,-119,-119,-119,
	-119,-120,-120,-120,-120,-120,-120,-121,-121,-121,-121,-121,-121,-121,-121,-121,
	-121,-121,-121,-121,-121,-121,-121,-121,-121,-121,-121,-120,-120,-120,-119,-119,
	-119,-117,-117,-116,-116,-115,-113,-113,-112,-111,-111,-109,-108,-107,-106,-106,
	-104,-103,-102,-100,-99,-99,-98,-96,-95,-94,-94,-92,-91,-90,-89,-87,
	-86,-86,-85,-83,-82,-81,-81,-79,-78,-77,-77,-75,-74,-74,-73,-72,
	-72,-70,-69,-69,-68,-66,-66,-65,-64,-64,-62,-62,-61,-60,-58,-58,
	-57,-56,-56,-54,-53,-53,-52,-51,-49,-49,-48,-47,-45,-44,-43,-43,
	-41,-40,-39,-37,-36,-35,-32,-31,-30,-28,-26,-24,-22,-20,-19,-17,
	-15,-14,-11,-10,-9,-6,-5,-3,-2,-1,1,2,3,5,6,7,
	9,10,11,13,14,15,15,18,18,19,20,22,23,23,24,26,
	27,27,28,30,31,31,32,34,34,35,36,36,37,39,39,40,
	41,41,43,44,44,45,47,48,48,49,51,51,52,53,53,54,
	56,56,57,57,58,60,60,61,61,62,64,64,65,65,66,66,
	68,68,69,70,70,70,72,72,72,73,73,73,73,74,74,74,
	74,74,74,74,74,74,74,74,74,74,73,73,73,73,72,72,
	72,70,70,70,69,69,68,68,68,66,66,65,65,65,64,64,
	62,62,62,61,61,60,60,60,58,58,58,57,57,57,57,56,
	56,56,56,56,56,56,56,56,56,56,56,56,56,56,56,56,
	56,56,56,56,54,54,54,54,54,54,53,53,53,52,52,52,
	51,51,51,49,49,48,48,47,45,45,44,44,43,41,41,40,
	39,37,37,36,35,35,34,32,32,31,30,28,28,27,26,26,
	24,23,23,22,22,20,19,19,18,18,17,15,15,14,14,14,
	13,13,11,11,11,10,10,9,9,9,7,7,7,7,6,6,
	6,5,5,5,5,3,3,3,2,2,2,2,1,1,1,0,
	0,0,-1,-1,-1,-2,-2,-2,-2,-3,-3,-3,-5,-5,-5,-5,
	-6,-6,-6,-7,-7,-7,-9,-9,-9,-10,-10,-10,-10,-11,-11,-11,
	-11,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-14,-14,-14,-14,-14,
	-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,-14,
	-15,-15,-15,-15,-15,-15,-15,-15,-15,-15,-15,-15,-15,-17,-17,-17,
	-17,-17,-17,-17,-17,-17,-18,-18,-18,-18,-18,-18,-18,-18,-18,-18,
	-19,-19,-19,-19,-19,-19,-19,-19,-18,-18,-18,-18,-18,-18,-18,-18,
	-18,-17,-17,-17,-17,-17,-15,-15,-15,-15,-15,-14,-14,-14,-14,-14,
	-14,-13,-13,-13,-13,-13,-13,-13,-13,-11,-11,-11,-11,-11,-11,-11,
	-10,-10,-10,-10,-10,-9,-9,-9,-9,-9,-9,-7,-7,-7,-7,-7,
	-7,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-3,-3,-3,-3,-3,
	-2,-2,-2,-2,-1,-1,-1,0,0,0,1,1,1,2,2,3,
	3,3,5,5,6,6,7,7,7,9,9,10,10,10,11,11,
	11,13,13,14,14,14,15,15,15,15,17,17,17,17,18,18,
	18,18,18,19,19,19,19,19,19,20,20,20,20,20,20,20,
	22,22,22,22,22,22,23,23,23,23,23,24,24,24,24,24,
	26,26,26,26,27,27,27,28,28,28,30,30,30,31,31,31,
	32,32,32,32,32,32,34,34,34,34,34,34,34,34,34,34,
	34,32,32,32,32,32,32,32,32,31,31,31,31,31,30,30,
	30,30,28,28,28,28,28,27,27,27,27,26,26,26,26,24,
	24,24,23,23,23,22,22,20,20,19,19,19,18,18,17,17,
	17,15,15,14,14,13,13,13,11,11,11,10,10,9,9,9,
	7,7,6,6,5,5,3,3,2,2,1,1,0,0,-1,-1,
	-2,-2,-3,-3,-3,-5,-5,-6,-6,-7,-7,-9,-9,-10,-10,-11,
	-11,-13,-13,-14,-14,-15,-15,-17,-17,-18,-18,-19,-19,-19,-20,-20,
	-22,-22,-23,-23,-24,-24,-24,-26,-26,-27,-27,-27,-28,-28,-30,-30,
	-31,-31,-32,-32,-34,-34,-35,-35,-36,-36,-36,-37,-37,-37,-39,-39,
	-39,-39,-40,-40,-40,-40,-41,-41,-41,-41,-41,-43,-43,-43,-43,-44,
	-44,-45,-45,-45,-45,-47,-47,-47,-48,-48,-48,-48,-49,-49,-49,-49,
	-49,-51,-51,-51,-51,-51,-51,-51,-51,-52,-52,-52,-52,-52,-52,-52,
	-52,-52,-53,-53,-53,-53,-53,-53,-52,-52,-52,-52,-52,-52,-52,-52,
	-51,-51,-51,-51,-51,-49,-49,-49,-49,-49,-48,-48,-48,-48,-48,-47,
	-47,-47,-47,-47,-47,-45,-45,-45,-45,-44,-44,-44,-43,-43,-41,-41,
	-41,-40,-40,-40,-39,-39,-37,-37,-37,-36,-36,-35,-35,-35,-34,-34,
	-32,-32,-32,-31,-31,-30,-30,-30,-28,-28,-28,-28,-28,-27,-27,-27,
	-27,-27,-26,-26,-26,-26,-24,-24,-23,-23,-22,-22,-20,-20,-19,-18,
	-18,-17,-17,-15,-14,-14,-13,-13,-13,-11,-11,-10,-10,-10,-9,-9,
	-7,-7,-7,-6,-6,-5,-5,-3,-3,-3,-2,-2,-2,-1,-1,-1,
	0,0,0,1,1,1,1,2,2,3,3,3,5,5,6,6,
	7,7,7,9,9,10,10,11,11,11,13,13,13,14,14,14,
	14,15,15,15,15,17,17,17,17,17,18,18,18,19,19,19,
	20,20,20,20,22,22,22,22,22,23,23,23,23,24,24,24,
	24,26,26,26,27,27,27,28,28,28,28,28,30,30,30,30,
	30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,
	30,30,30,28,28,28,28,28,28,28,28,28,28,28,28,28,
	28,28,30,30,30,30,30,30,30,30,30,30,30,30,30,30,
	30,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,
	31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,
	30,30,30,30,30,28,28,28,28,28,28,28,27,27,27,27,
	27,27,26,26,26,26,26,26,26,26,24,24,24,24,24,24,
	24,23,23,23,23,22,22,22,22,22,20,20,20,20,20,20,
	20,19,19,19,19,19,18,18,18,18,17,17,17,15,15,14,
	14,14,13,13,11,11,11,10,10,9,9,9,7,7,6,6,
	5,5,3,3,2,2,2,1,1,0,0,0,-1,-1,-2,-2,
	-2,-2,-3,-3,-3,-3,-5,-5,-5,-6,-6,-6,-7,-7,-7,-9,
	-9,-10,-10,-10,-11,-11,-13,-13,-14,-14,-14,-15,-15,-15,-17,-17,
	-17,-18,-18,-18,-18,-19,-19,-19,-20,-20,-20,-22,-22,-22,-22,-23,
	-23,-23,-24,-24,-24,-26,-26,-26,-27,-27,-27,-28,-28,-30,-30,-30,
	-31,-31,-31,-32,-32,-32,-32,-34,-34,-34,-35,-35,-35,-35,-35,-36,
	-36,-36,-36,-36,-36,-36,-36,-36,-36,-36,-36,-36,-35,-35,-35,-35,
	-35,-34,-34,-34,-34,-34,-34,-34,-34,-32,-32,-32,-32,-32,-32,-32,
	-32,-32,-32,-32,-32,-32,-32,-32,-32,-31,-31,-31,-31,-31,-31,-31,
	-30,-30,-30,-30,-28,-28,-28,-27,-27,-27,-26,-26,-26,-24,-24,-23,
	-23,-22,-22,-20,-20,-19,-19,-18,-18,-17,-17,-15,-15,-14,-14,-13,
	-13,-11,-11,-10,-10,-10,-9,-7,-7,-6,-6,-5,-5,-3,-2,-2,
	-1,-1,0,0,1,1,2,2,3,3,5,5,6,6,6,7,
	7,9,9,9,10,10,11,11,13,13,14,14,15,15,17,17,
	18,18,18,19,19,19,20,20,22,22,22,23,23,23,24,24,
	24,26,26,27,27,27,28,28,28,30,30,30,31,31,31,32,
	32,32,34,34,34,34,35,35,35,35,35,36,36,36,36,36,
	36,36,36,36,37,37,37,37,37,37,37,37,37,39,39,39,
	39,39,39,39,39,39,39,39,40,40,40,40,40,40,40,41,
	41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,40,
	40,40,40,39,39,37,37,37,36,36,36,35,35,34,34,32,
	32,32,31,31,30,30,28,28,28,27,27,27,26,26,26,24,
	24,24,23,23,23,22,22,20,20,20,19,19,18,18,17,17,
	15,15,15,14,14,14,13,13,13,13,11,11,11,11,10,10,
	10,9,9,9,7,7,7,6,6,6,5,5,3,2,2,1,
	1,0,0,-1,-1,-2,-2,-3,-3,-5,-5,-6,-6,-7,-7,-9,
	-9,-9,-10,-10,-11,-11,-11,-13,-13,-13,-13,-14,-14,-14,-14,-15,
	-15,-15,-15,-15,-15,-15,-15,-15,-17,-17,-17,-17,-17,-18,-18,-18,
	-19,-19,-19,-20,-20,-20,-22,-22,-22,-23,-23,-23,-24,-24,-24,-24,
	-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,-26,
	-26,-26,-26,-26,-26,-26,-26,-24,-24,-24,-24,-24,-24,-24,-24,-24,
	-24,-23,-23,-23,-23,-22,-22,-22,-20,-20,-20,-19,-19,-19,-18,-18,
	-18,-17,-17,-17,-15,-15,-15,-15,-14,-14,-14,-14,-14,-14,-14,-13,
	-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,-13,
	-13,-11,-11,-11,-11,-11,-11,-11,-11,-11,-11,-11,-10,-10,-10,-10,
	-10,-10,-10,-10,-9,-9,-9,-9,-9,-7,-7,-7,-7,-6,-6,-5,
	-5,-5,-3,-3,-3,-2,-2,-1,-1,-1,0,0,0,0,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,0,0,0,0,0,0,0,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,
	-1,-2,-2,-2,-3,-3,-5,-5,-5,-6,-6,-7,-7,-9,-10,-10,
	-11,-11,-11,-13,-13,-14,-14,-15,-15,-15,-17,-17,-18,-18,-18,-18,
	-19,-19,-19,-19,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,
	-20,-20,-20,-20,-20,-20,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,
	-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,-19,
	-19,-19,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,-20,
	-20,-20,-22,-22,-22,-22,-22,-22,-22,-22,-22,-22,-22,-22,-22,-22,
	-22,-22,-22,-22,-22,-22,-20,-20,-20,-20,-20,-19,-19,-19,-19,-18,
	-18,-17,-17,-17,-15,-15,-15,-14,-14,-13,-13,-13,-11,-11,-11,-10,
	-10,-10,-9,-9,-9,-9,-7,-7,-7,-7,-7,-6,-6,-6,-6,-5,
	-5,-5,-5,-5,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-1,
	-1,-1,-1,-1,-1,-1,0,0,0,0,1,1,1,1,2,2,
	2,2,3,3,3,5,5,5,6,6,6,7,7,7,7,9,
	9,9,10,10,10,11,11,11,11,13,13,13,14,14,14,14,
	15,15,15,15,15,17,17,17,17,17,18,18,18,18,18,18,
	18,18,18,18,18,18,18,18,18,18,17,17,17,17,17,17,
	15,15,15,15,14,14,14,14,13,13,13,13,11,11,11,11,
	10,10,10,10,10,10,9,9,9,9,9,9,9,9,9,9,
	9,9,9,9,7,7,7,7,7,6,6,6,6,5,5,5,
	3,3,3,2,2,2,1,1,1,0,0,-1,-1,-2,-2,-3,
	-3,-5,-5,-6,-6,-6,-7,-7,-9,-9,-10,-10,-10,-11,-11,-11,
	-13,-13,-13,-14,-14,-14,-15,-15,-15,-17,-17,-18,-18,-19,-19,-19,
	-20,-20,-22,-22,-22,-23,-23,-23,-24,-24,-24,-24,-26,-26,-26,-26,
	-26,-26,-26,-26,-27,-27,-27,-27,-27,-27,-28,-28,-28,-28,-28,-30,
	-30,-30,-31,-31,-31,-32,-32,-32,-34,-34,-34,-35,-35,-35,-35,-36,
	-36,-36,-36,-37,-37,-37,-39,-39,-39,-39,-40,-40,-40,-40,-41,-41,
	-41,-41,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,-43,
	-43,-43,-43,-41,-41,-41,-41,-41,-40,-40,-40,-40,-39,-39,-39,-37,
	-37,-37,-37,-36,-36,-36,-35,-35,-35,-34,-34,-34,-32,-32,-31,-31,
	-30,-30,-30,-28,-28,-27,-27,-27,-26,-26,-26,-24,-24,-24,-23,-23,
	-22,-22,-22,-20,-20,-20,-19,-19,-18,-18,-17,-17,-15,-15,-14,-14,
	-13,-11,-11,-10,-9,-9,-7,-7,-6,-5,-5,-3,-3,-2,-2,-1,
	0,0,1,1,2,3,3,5,5,6,7,9,9,10,11,11,
	13,13,14,14,15,15,17,17,17,18,18,18,19,19,19,19,
	20,20,22,22,22,23,23,24,24,26,26,26,27,27,27,28,
	28,28,30,30,30,31,31,31,31,32,32,32,34,34,34,35,
	35,36,36,36,37,37,37,39,39,39,39,40,40,40,40,41,
	41,41,41,43,43,43,43,44,44,44,44,45,45,45,45,47,
	47,47,47,47,48,48,48,48,48,48,48,48,48,48,48,48,
	47,47,47,47,47,47,45,45,45,45,45,44,44,44,44,43,
	43,43,41,41,41,40,40,40,39,39,39,39,37,37,37,37,
	36,36,36,36,36,36,36,36,35,35,35,35,35,35,35,34,
	34,34,34,32,32,32,31,31,31,30,30,30,28,28,28,27,
	27,26,26,24,24,23,23,22,22,20,20,19,19,18,17,17,
	15,15,14,14,13,13,11,11,10,10,9,7,7,6,6,5,
	5,3,3,2,2,1,1,0,0,-1,-1,-2,-2,-2,-3,-3,
	-5,-5,-5,-6,-6,-7,-7,-9,-9,-9,-10,-10,-10,-11,-11,-11,
	-13,-13,-13,-14,-14,-14,-14,-15,-15,-17,-17,-17,-17,-18,-18,-18,
	-19,-19,-20,-20,-20,-22,-22,-23,-23,-24,-24,-26,-26,-26,-27,-27,
	-28,-28,-28,-30,-30,-30,-31,-31,-31,-32,-32,-32,-32,-32,-34,-34,
	-34,-34,-34,-34,-35,-35,-35,-35,-35,-35,-35,-35,-35,-35,-35,-35,
	-34,-34,-34,-34,-34,-34,-32,-32,-32,-32,-32,-32,-32,-31,-31,-31,
	-31,-31,-31,-31,-31,-31,-31,-30,-30,-30,-30,-30,-30,-30,-28,-28,
	-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,
	-26,-26,-26,-24,-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-22,
	-20,-20,-20,-19,-19,-19,-18,-18,-18,-17,-17,-15,-15,-15,-14,-14,
	-13,-13,-11,-11,-11,-10,-10,-9,-9,-7,-7,-6,-6,-5,-5,-5,
	-3,-3,-2,-2,-2,-1,-1,-1,0,0,0,0,1,1,1,1,
	2,2,2,2,3,3,3,3,5,5,5,6,6,6,6,7,
	7,9,9,9,10,10,11,11,11,13,13,13,14,14,14,15,
	15,15,17,17,17,17,18,18,18,18,19,19,19,19,20,20,
	20,22,22,22,23,23,23,24,24,24,26,26,26,26,27,27,
	27,27,27,27,27,28,28,28,27,27,27,27,27,27,27,27,
	26,26,26,26,24,24,24,24,23,23,23,23,23,22,22,22,
	22,22,22,20,20,20,20,20,20,20,20,20,20,20,20,19,
	19,19,19,19,18,18,18,18,17,17,17,17,15,15,15,15,
	14,14,14,13,13,13,13,11,11,11,11,10,10,10,9,9,
	7,7,6,6,5,5,3,3,2,2,1,1,0,0,-1,-1,
	-1,-2,-2,-2,-3,-3,-3,-3,-5,-5,-5,-6,-6,-6,-7,-7,
	-7,-7,-9,-9,-9,-10,-10,-10,-11,-11,-13,-13,-13,-14,-14,-14,
	-15,-15,-15,-17,-17,-17,-18,-18,-18,-18,-19,-19,-19,-19,-19,-20,
	-20,-20,-20,-20,-22,-22,-22,-22,-22,-22,-23,-23,-23,-23,-23,-24,
	-24,-24,-24,-24,-26,-26,-26,-26,-26,-27,-27,-27,-27,-27,-27,-27,
	-27,-27,-27,-27,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,
	-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-22,-20,-20,-20,-19,
	-19,-19,-19,-18,-18,-17,-17,-17,-17,-15,-15,-15,-14,-14,-14,-14,
	-14,-13,-13,-13,-13,-13,-13,-11,-11,-11,-11,-11,-10,-10,-10,-10,
	-9,-9,-9,-7,-7,-7,-7,-6,-6,-6,-5,-5,-5,-3,-3,-3,
	-3,-2,-2,-2,-1,-1,-1,-1,0,0,0,1,1,1,2,2,
	2,3,3,3,5,5,5,6,6,6,7,7,7,9,9,9,
	10,10,10,11,11,11,11,13,13,13,13,14,14,14,14,14,
	14,14,14,15,15,14,14,14,14,14,14,14,14,14,14,14,
	14,13,13,13,13,13,13,13,13,13,13,13,11,11,11,11,
	11,11,11,11,11,11,10,10,10,10,10,10,9,9,9,9,
	7,7,7,7,7,6,6,6,6,5,5,5,3,3,3,2,
	1,1,0,0,-1,-1,-1,-2,-2,-2,-2,-2,-2,-2,-2,-2,
	-2,-2,-1,-1,
};

static const int8_t wt_sustain1[] = {
	-8,-8,-12,-12,-12,-12,-16,-16,-16,-16,-21,-21,-21,-21,-21,-25,
	-25,-25,-25,-29,-29,-29,-29,-29,-29,-33,-33,-33,-33,-33,-33,-33,
	-33,-38,-38,-38,-38,-38,-38,-42,-42,-42,-42,-42,-46,-46,-46,-46,
	-50,-50,-50,-50,-55,-55,-55,-59,-59,-59,-59,-63,-63,-63,-63,-63,
	-67,-67,-67,-67,-71,-71,-71,-71,-71,-76,-76,-76,-76,-80,-80,-80,
	-80,-80,-84,-84,-84,-84,-84,-88,-88,-88,-88,-88,-93,-93,-93,-93,
	-93,-97,-97,-97,-97,-97,-101,-101,-101,-101,-101,-101,-105,-105,-105,-105,
	-105,-105,-105,-110,-110,-110,-110,-110,-110,-110,-110,-110,-110,-110,-114,-114,
	-114,-114,-114,-114,-114,-114,-114,-114,-114,-114,-114,-114,-114,-114,-118,-118,
	-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,
	-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-118,-122,-122,-122,
	-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,-122,
	-122,-122,-122,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,
	-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,
	-127,-127,-127,-127,-127,-127,-127,-127,-122,-122,-122,-122,-122,-122,-122,-122,
	-122,-122,-122,-122,-122,-122,-122,-122,-118,-118,-118,-118,-118,-118,-118,-118,
	-114,-114,-114,-114,-114,-114,-110,-110,-110,-110,-110,-105,-105,-105,-105,-105,
	-105,-101,-101,-101,-101,-97,-97,-97,-97,-97,-93,-93,-93,-93,-93,-93,
	-88,-88,-88,-88,-88,-84,-84,-84,-84,-80,-80,-80,-80,-80,-76,-76,
	-76,-76,-71,-71,-71,-71,-67,-67,-67,-67,-63,-63,-63,-59,-59,-59,
	-59,-55,-55,-55,-55,-50,-50,-50,-50,-46,-46,-46,-46,-46,-42,-42,
	-42,-42,-42,-38,-38,-38,-38,-33,-33,-33,-33,-33,-29,-29,-29,-29,
	-29,-25,-25,-25,-25,-25,-21,-21,-21,-21,-21,-16,-16,-16,-16,-12,
	-12,-12,-8,-8,-8,-8,-4,-4,-4,0,0,0,4,4,4,8,
	8,8,12,12,12,16,16,16,21,21,21,21,25,25,25,29,
	29,29,33,33,33,33,38,38,38,38,42,42,42,46,46,46,
	46,50,50,50,50,55,55,55,55,59,59,59,59,63,63,63,
	63,67,67,67,67,71,71,71,71,76,76,76,76,76,80,80,
	80,80,80,84,84,84,84,84,84,88,88,88,88,88,88,88,
	93,93,93,93,93,93,97,97,97,97,97,97,97,101,101,101,
	101,101,101,105,105,105,105,105,110,110,110,110,110,110,114,114,
	114,114,114,114,114,118,118,118,118,118,118,118,122,122,122,122,
	122,122,122,122,122,122,122,127,127,127,127,127,127,127,127,127,
	127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
	127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
	127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
	127,127,127,122,122,122,122,122,122,122,122,122,122,122,118,118,
	118,118,118,118,118,118,118,118,118,118,118,118,118,114,114,114,
	114,114,114,114,114,114,114,114,114,114,114,114,114,110,110,110,
	110,110,110,110,110,110,110,105,105,105,105,105,105,105,105,101,
	101,101,101,101,101,101,101,97,97,97,97,97,97,93,93,93,
	93,93,93,88,88,88,88,88,88,84,84,84,84,84,80,80,
	80,80,80,80,76,76,76,76,76,76,71,71,71,71,67,67,
	67,67,63,63,63,59,59,59,59,55,55,55,55,50,50,50,
	50,50,46,46,46,46,46,46,42,42,42,42,42,38,38,38,
	38,33,33,33,29,29,29,25,25,25,21,21,21,16,16,16,
	16,12,12,12,12,12,12,12,8,8,8,8,8,8,8,8,
	8,8,4,4,4,0,0,-4,-4,-8,-8,-12,-12,-16,-21,-21,
	-25,-25,-29,-29,-33,-33,-38,-38,-38,-38,-38,-42,-42,-38,-38,-38,
	-38,-38,-33,-33,-33,-29,-29,-25,-25,-25,-21,-21,-21,-16,-16,-16,
	-16,-16,-16,-16,
};

static const uint8_t envelope_table1[] = {
	2,2,255,255,255,255,255,255,207,207,207,207,207,177,177,177,
	177,177,210,210,210,210,210,130,130,130,130,130,174,174,174,174,
	174,138,138,138,138,138,138,102,102,102,102,102,146,146,146,146,
	141,141,141,141,141,182,182,182,182,182,182,119,119,119,119,119,
	135,135,135,135,135,169,169,169,169,169,108,108,108,108,108,135,
	135,135,135,135,97,97,97,97,97,97,83,83,83,83,83,138,
	138,138,138,138,99,99,99,99,91,91,91,91,91,91,74,74,
	74,74,74,91,91,91,91,91,110,110,110,110,110,77,77,77,
	77,77,85,85,85,85,85,85,72,72,72,72,72,66,66,66,
	66,66,99,99,99,99,99,85,85,85,85,85,77,77,77,77,
	77,77,63,63,63,63,63,55,55,55,55,55,60,60,60,60,
	60,52,52,52,52,52,60,60,60,60,60,58,58,58,58,58,
	49,49,49,49,49,63,63,63,63,63,60,60,60,60,60,60,
	60,60,60,60,60,49,49,49,49,49,49,49,49,49,49,55,
	55,55,55,55,47,47,47,47,47,49,49,49,49,49,44,44,
	44,44,44,38,38,38,38,38,38,38,38,38,38,38,33,33,
	33,33,36,36,36,36,36,36,36,36,36,36,36,38,38,38,
	38,38,41,41,41,41,41,33,33,33,33,33,36,36,36,36,
	36,36,27,27,27,27,27,27,27,27,27,27,36,36,36,36,
	36,30,30,30,30,30,30,30,30,30,30,27,27,27,27,27,
	27,27,27,27,27,27,27,27,27,27,22,22,22,22,22,22,
	22,22,22,22,22,24,24,24,24,24,22,22,22,22,22,24,
	24,24,24,24,24,24,24,24,24,22,22,22,22,22,22,16,
	16,16,16,16,16,16,16,16,16,19,19,19,19,19,19,19,
	19,19,19,19,19,19,19,19,19,19,19,19,19,16,16,16,
	16,16,16,16,16,16,16,16,16,16,16,16,13,13,13,13,
	13,13,13,13,13,13,13,16,16,16,16,16,16,16,16,16,
	16,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
	13,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
	11,11,11,11,11,11,11,11,11,11,8,8,8,8,8,8,
	8,8,8,8,8,8,8,8,8,11,11,11,11,11,8,8,
	8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
	8,8,8,5,5,5,5,5,5,5,5,5,5,8,8,8,
	8,8,8,8,8,8,8,8,8,8,8,8,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,5,5,5,5,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,
	0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,
	2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};
#endif
