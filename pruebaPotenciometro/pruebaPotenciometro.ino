int A,B;
int pin1 = 6;
int pin2 = 7;
void setup()
{
   Serial.begin(9600);
   pinMode(pin1, OUTPUT);
   pinMode(pin2, OUTPUT);
}
 
void loop(){
  int poten = digitalRead(A0);
  Serial.print("dame el objetivo");
  int objetivo = Serial.read();
  int e = objetivo - poten;
  if(e>0){
    //no tengo idea de que poner
    //se me ocurre poner un analog write que tenga el valor de A y B
    //pero como no tengo el motor no me la quiero jugar
    analogWrite(pin1, e);
  }
  if(e<0){
    analogWrite(pin2, e);
  }
}

    
