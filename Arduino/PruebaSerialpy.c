int ledRojo = 8;
int ledVerde = 9;
int ledAmarillo = 10;
int mssg = 0; //variable para guardar el mensaje
 
void setup()
{
   pinMode(ledRojo, OUTPUT);
   pinMode(ledAmarillo, OUTPUT);
   pinMode(ledVerde, OUTPUT); //establecemos 13 como salida
   Serial.begin(9600); //iniciando Serial
}
 
void loop()
{
   if (Serial.available() > 0)
   {
      mssg = Serial.read(); //leemos el serial
 
      if(mssg == 'r')
      {
         digitalWrite(ledRojo, HIGH); //si entra una 'e' encendemos
         digitalWrite(ledAmarillo, LOW);
         digitalWrite(ledVerde, LOW);
      }
      else if(mssg == 'a')
      {
         digitalWrite(ledAmarillo, HIGH); //si entra una 'a' apagamos
         digitalWrite(ledRojo, LOW);
         digitalWrite(ledVerde, LOW);
      }
      else if (mssg = 'v')
      {
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledRojo, LOW); //si entra una 'e' encendemos
        digitalWrite(ledAmarillo, LOW);
      }
   }
}