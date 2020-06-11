int A = 2;
int Ksp = 3;
int S = 4;
int MotorD = 11;
int MotorL = 10;

void setup(){
  pinMode(A, INPUT_PULLUP);
  pinMode(Ksp, INPUT_PULLUP);
  pinMode(S, INPUT_PULLUP);
  pinMode(MotorD, OUTPUT);
  pinMode(MotorL, OUTPUT);
}

void loop(){
  if(digitalRead(A)==LOW && digitalRead(S)==LOW && digitalRead(Ksp)==HIGH){
    digitalWrite(MotorD, 1);
    digitalWrite(MotorL, 0);
  }
  else if(digitalRead(A)==LOW && digitalRead(S)==LOW && digitalRead(Ksp)==LOW){
    digitalWrite(MotorD, 0);
    digitalWrite(MotorL, 0);
  }
  else if(digitalRead(A)==HIGH && digitalRead(S)==LOW && digitalRead(Ksp)==LOW){
    digitalWrite(MotorD, 0);
    digitalWrite(MotorL, 1); 
  }
  else{
    digitalWrite(MotorD, 0);
    digitalWrite(MotorL, 0);    
  }
}
 
