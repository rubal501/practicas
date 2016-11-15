int Sensor = 0;
int Lectura;
void setup() {
  // put your setup code here, to run once:
pinMode(Sensor, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Lectura = analogRead(Sensor);
  Serial.print("analog.Read = ");
  Serial.println(Lectura);
}
