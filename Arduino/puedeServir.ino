
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int byteRecibido;
  if(Serial.available()> 0){
    byteRecibido = Serial.read();
    if(byteRecibido =='a'){
      digitalWrite(11 , HIGH);
      //digitalWrite(12, LOW);
      //digitalWrite(10, LOW);
      }
    if(byteRecibido =='r'){
      digitalWrite(10, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      }
    if(byteRecibido == 'v'){
      digitalWrite(12, HIGH);
      //digitalWrite(11, LOW);
      //digitalWrite(12, LOW);
      }
    if(byteRecibido == '0'){
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      
    }
      
    }
}
