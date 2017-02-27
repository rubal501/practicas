#define umbral  30

int pin1 = 6;
int pin2 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  int sp;
  for (sp=50; sp<256; sp++)
  {
      Serial.println(sp);
  
      analogWrite(pin1, 0);
      analogWrite(pin2, sp);
      delay(500);  
  }
}
