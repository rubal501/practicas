int Sensor = A0;
int Rojo = 10;
int Amarillo = 9;
int Verde = 8;
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
  if(Lectura >= 400 && Lectura <500 ){
    digitalWrite(Verde, HIGH);
  }
  if(Lectura >= 500 && Lectura <600 ){
    digitalWrite(Amarillo, HIGH);
  }
  if(Lectura > 600){
    digitalWrite(Rojo, HIGH);
  }
  delay(300);
  digitalWrite(Verde, LOW);
  digitalWrite(Amarillo, LOW);
  digitalWrite(Rojo, LOW);
}
    
