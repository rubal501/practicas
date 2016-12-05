
int sensor = A0;int lectura;int ledr=10;int leda=11;int ledv=12;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output
  Serial.begin(9600);pinMode(ledr, OUTPUT);pinMode(leda, OUTPUT);pinMode(ledv, OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() 
{
  lectura = analogRead(sensor);
  Serial.println(lectura);
  delay(500);
  if(lectura >= 500){
    digitalWrite(leda, HIGH);
    delay(300);
    digitalWrite(leda, LOW);
    delay(300);
  }
  else{
   digitalWrite(ledr, HIGH);   // turn the LED on (HIGH is the voltage level               // wait for a second
  delay (9000);
  digitalWrite(ledr, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(leda, HIGH);
  delay (1000);
  digitalWrite(leda, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(leda, HIGH);
  delay (1000);
  digitalWrite(leda, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(leda, HIGH);
  delay (1000);
  digitalWrite(leda, LOW);    // turn the LED off by making the voltage LOW
  delay(500);// wait for a second
  digitalWrite(ledv, HIGH);
  delay (9000);
  digitalWrite(ledv, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(ledr, HIGH);    // 
  delay(4000);
  digitalWrite(ledr, LOW);
  }
}
