int Sensor = A0;
int Rojo = 11;
int Amarillo = 12;
int Verde = 13;
int Lectura;
void setup() {
  // put your setup code here, to run once:
pinMode(Sensor, INPUT);
Serial.begin(9600);
pinMode(Rojo, OUTPUT);
pinMode(Amarillo, OUTPUT);
pinMode(Verde, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Lectura = analogRead(Sensor);
  Serial.print("analog.Read = ");
  Serial.println(Lectura);
  if(Lectura <= 150){
    digitalWrite(Verde, HIGH);
    delay(1000);
    digitalWrite(Verde, LOW);
    }
   if(Lectura> 150 || Lectura<180){
    digitalWrite(Amarillo, HIGH);
    delay(1000);
    digitalWrite(Amarillo, LOW);
     
   }
   if(Lectura>=180 ){
    digitalWrite(Rojo, HIGH);
    delay(1000);
    digitalWrite(Rojo, LOW);
   }
   delay(500);
  }
    
