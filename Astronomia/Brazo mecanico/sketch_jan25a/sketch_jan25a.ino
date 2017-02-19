int angulo1, angulo2, diferencia, B, A;
int pin = 6;
int pin2 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:
  angulo1 = analogRead(pin2);
  Serial.print("Dame el angulo al que se quiere llegar");
  angulo2 = Serial.read();
  diferencia = angulo2 - angulo1;
  if (diferencia > 0)
   {
     B = 0;
    A = 0;
   }
   if (diferencia < 0)
    {
      A = 0;
      B = -1* diferencia;
    }
    if (diferencia == 0)
     {
      Serial.println("Ya esta en la posicion indicada");
     } 

}
