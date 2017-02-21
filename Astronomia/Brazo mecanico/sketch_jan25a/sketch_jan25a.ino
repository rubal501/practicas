int angulo1, angulo2, diferencia, B, A;
int pin1 = 6;
int pin2 = 5;
int pinEntrada = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pinEntrada, INPUT);
  Serial.begin(9600);  
map(angulo1,0,1024,0,100);
}

void loop() {
  // put your main code here, to run repeatedly:
  angulo1 = analogRead(pinEntrada);
  //falta una manera para que interactue con el usuario
  angulo2 = Serial.read();
  diferencia = angulo2 - angulo1;
  if (diferencia > 0)
   {
     B = 0;
    A = diferencia;
    analogWrite(pin1, diferencia);
   }
   if (diferencia < 0)
    {
      A = 0;
      B = -1* diferencia;
      analogWrite(pin2, diferencia);
    }
    if (diferencia == 0)
     {
      //no se hace nada
     } 

}
