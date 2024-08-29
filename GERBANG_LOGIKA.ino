#include"logicGate.h"

void setup() {
 pinInput(2,3,4,5);  // A.B.C.D
 pinOutput(6,7,8,9); // W,X,Y,Z
}

void loop(){ 
  BEGIN(); 
    W = ((A && B) && !(A | (B && C)));
  END(); 
 }

 
