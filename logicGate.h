int A,B,C,D,W,X,Y,Z;
int I1,I2,I3,I4,Q1,Q2,Q3,Q4;

void pinInput(int I1, int I2, int I3, int I4){
  pinMode(I1,INPUT);   pinMode(I2,INPUT);   pinMode(I3,INPUT);   pinMode(I4,INPUT);
  A=0;   B=0;   C=0;   D=0;
}

void pinOutput(int Q1, int Q2, int Q3, int Q4){
  pinMode(Q1,OUTPUT);   pinMode(Q2,OUTPUT);   pinMode(Q3,OUTPUT);   pinMode(Q4,OUTPUT);
  W=0;   X=0;   Y=0;   Z=0;
}

void BEGIN(){
 A = digitalRead(I1);  B = digitalRead(I2);  C = digitalRead(I3);  D = digitalRead(I4);
}

void END(){
  digitalWrite(Q1,W);   digitalWrite(Q2,X);   digitalWrite(Q3,Y);   digitalWrite(Q4,Z);
}
