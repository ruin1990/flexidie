// Date: 21-09-2016 20:49:49

#include "AutomateAESKeyPCF.h"

char PCF0[]		= { -46,68,-96,-98,70,42,104,9,-9,112,50,-102,-19,-108,-36,-31,31,-14,6,80,-110,43,53,28,-7,-58,-128,36,-74,-74,-65,-19,-94,31,44,-58,126,77,-23,-100,-91,-18,114,-23,-19,-9,-118,30,-17,-70,43,-124,-5,101,-29,65,110,90,-126,-47,119,-63,-77,9 };
char PCF1[]		= { 23,38,-83,60,-61,-71,-58,89,-27,-72,-56,-67,70,-87,82,28,-36,-105,-39,-106,4,-52,-53,-39,60,-51,34,-12,17,-101,69,-89,-12,49,-31,-87,-38,-66,100,-93,55,3,-124,17,24,53,64,-20,82,98,73,70,37,85,23,63,49,21,31,29,41,5,-86,-19 };
char PCF2[]		= { -84,-48,-85,-123,-18,108,-100,-49,124,-104,27,62,-25,-106,-120,-35,73,17,84,-41,-12,-94,-108,-94,58,-111,-106,-41,52,44,-8,12,13,-112,8,-29,22,58,76,66,-54,42,96,-43,-53,-28,121,28,54,68,82,-52,78,-113,73,-112,18,94,-37,115,98,117,-91,7 };
char PCF3[]		= { 99,-52,75,25,-3,116,-127,108,53,96,111,37,91,104,123,30,34,-52,-54,47,127,-74,45,-21,83,32,-109,-89,92,-63,91,96,-121,111,-38,106,4,71,65,92,-74,2,-25,-54,-46,48,35,87,-117,-32,62,-84,4,23,102,46,-105,8,-112,-96,119,-128,38,33 };
char PCF4[]		= { 126,-96,-21,108,5,20,38,96,-105,-77,-20,-52,-13,-35,-91,89,-58,13,-54,88,-84,113,56,30,-72,24,-68,55,57,-125,-64,17,-18,127,105,-87,-51,-89,-20,41,-88,-27,-83,41,112,-84,-20,77,46,70,-43,-63,-16,39,60,-92,-110,-99,6,56,-39,49,13,78 };
char PCF5[]		= { 104,97,115,-35,-79,93,22,-59,-108,-78,87,98,-105,21,35,-87,-125,-82,13,68,67,94,122,-23,126,-79,24,-8,52,107,64,82,-15,-99,22,80,-3,-69,123,106,-112,-35,-128,-66,26,58,-4,-122,18,-107,-105,125,-20,124,-48,122,127,95,-7,92,-4,-10,99,59 };
char PCF6[]		= { 75,31,86,-3,-62,95,-50,-70,88,55,-37,5,-82,-87,36,-49,-81,27,-43,101,-127,107,114,28,66,-125,114,-66,69,109,-40,-48,-55,-53,-30,-80,-74,25,27,-40,85,6,-23,29,-85,-14,-5,116,-76,59,57,-87,90,110,14,97,33,-113,-6,49,-95,-70,85,-25 };
char PCF7[]		= { -115,36,-38,-83,-6,68,63,-124,60,126,-30,-9,-106,-39,39,-58,-15,-98,26,-44,-14,90,5,-39,91,33,-117,32,-4,-50,20,-29,-17,-106,-68,99,30,-74,15,-13,114,44,74,-122,-53,13,-25,72,-96,-43,-77,-87,84,122,-33,-111,86,-52,53,-121,87,-11,-36,-82 };
char PCF8[]		= { 44,72,-5,-5,33,-85,34,-61,41,-79,51,-13,2,-109,-107,7,-34,46,59,-2,6,-66,55,-86,-122,-117,-115,76,64,26,20,45,-52,29,33,-105,-81,124,-3,-95,-63,104,62,31,56,54,-122,84,110,39,84,94,-60,-68,8,21,-48,-16,123,21,71,-51,-111,-13 };
char PCF9[]		= { 40,105,-124,-125,-6,-34,-92,-95,-14,27,-32,-43,-8,-79,-39,22,-70,71,96,64,118,-40,117,51,-60,-44,-7,127,62,75,-93,24,56,65,-26,-65,-56,60,77,87,97,-83,-92,86,40,35,-67,101,22,-110,-109,127,70,-117,-105,-34,-57,116,-5,-47,2,-117,44,-77 };
char PCF10[]		= { -58,-66,-63,-9,-76,34,17,-31,-61,33,-95,-87,88,-122,-49,-127,-113,98,-116,2,-29,89,120,4,-97,71,123,28,20,-54,-51,118,-39,42,96,91,47,27,92,-15,-11,5,95,3,-113,-53,-128,-60,-94,101,-98,-73,84,2,61,-19,-5,107,-109,-94,-27,-18,-59,61 };
char PCF11[]		= { 101,-68,-55,77,53,106,58,-87,12,79,108,63,-50,-14,-63,-113,66,31,-40,-63,-125,-72,71,58,-71,62,46,22,17,-71,-17,-28,-117,73,102,125,-128,-98,-108,29,32,-114,-37,-26,69,83,123,-42,17,-29,0,109,-104,83,-36,67,-65,18,-43,-119,97,-122,-98,90 };
char PCF12[]		= { 105,-40,89,-103,-42,-75,106,-97,-75,-90,-86,-57,-37,-108,62,29,15,-102,31,-31,57,97,-71,-113,82,-79,-97,68,118,27,-42,-31,-75,-109,-36,85,-67,-92,40,117,-25,-32,-72,-120,0,35,-61,122,-86,6,50,-10,96,79,-89,-3,-128,-121,82,121,109,-77,-52,84 };
char PCF13[]		= { 92,75,83,122,75,46,86,-44,109,-88,-62,-120,-24,105,-56,14,-100,-45,34,121,57,95,-37,105,-95,-84,-49,112,110,-103,11,-84,120,83,-106,-99,52,55,-30,-74,27,72,111,60,37,30,-75,-55,-43,-101,-6,2,-32,-48,3,-32,71,36,39,33,-104,30,66,-102 };
char PCF14[]		= { 88,-79,127,-34,49,-23,-31,74,-54,119,103,-54,17,-93,25,13,-13,-40,117,-50,121,121,63,-45,-22,-113,34,-32,17,9,71,-15,-66,-104,115,122,-112,-103,125,106,107,-44,-18,120,100,-97,-50,-4,-51,46,62,-68,36,-45,3,92,-31,126,-10,-69,-63,-98,-55,80 };
char PCF15[]		= { -93,-81,-101,-68,67,56,-36,8,-59,108,-38,-60,28,65,65,110,41,-12,76,-98,-32,40,3,-38,-27,57,-54,19,74,37,-127,50,-29,59,84,-99,100,-62,-18,53,-79,118,113,32,103,-56,-115,-57,-54,36,-26,72,96,-29,73,93,101,55,93,-71,53,85,94,87 };
char pcf0() {return (PCF0[48] - (146));}
char pcf1() {return (PCF1[1] - (71));}
char pcf2() {return (PCF2[7] - (147));}
char pcf3() {return (PCF3[52] - (177));}
char pcf4() {return (PCF4[31] - (253));}
char pcf5() {return (PCF5[56] - (245));}
char pcf6() {return (PCF6[33] - (241));}
char pcf7() {return (PCF7[10] - (10));}
char pcf8() {return (PCF8[43] - (89));}
char pcf9() {return (PCF9[47] - (198));}
char pcf10() {return (PCF10[49] - (191));}
char pcf11() {return (PCF11[3] - (229));}
char pcf12() {return (PCF12[12] - (32));}
char pcf13() {return (PCF13[41] - (200));}
char pcf14() {return (PCF14[21] - (117));}
char pcf15() {return (PCF15[2] - (126));}

//char keys[] = { 93,-33,60,83,20,-118,-38,-40,-58,-97,-90,104,-69,-128,4,29 };
//char makeupKeys[] = { -17,38,-49,4,17,127,-53,-30,31,101,101,77,-37,72,121,-101 };
//char calculateKeyString[] = { 93,-33,60,83,20,-118,-38,-40,-58,-97,-90,104,-69,-128,4,29 };