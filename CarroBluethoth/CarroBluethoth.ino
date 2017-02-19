#define motor1 3
#define motor2 6
#define M1dir1 4//motor1 con direccion 1
#define M1dir2 5
#define M2dir1 7
#define M2dir2 8
void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(M1dir1, OUTPUT);
  pinMode(M1dir2, OUTPUT);
  pinMode(M2dir1, OUTPUT);
  pinMode(M2dir2, OUTPUT);

}
void MoverHaciaAdelante(void){
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(M1dir2, LOW);
  digitalWrite(M1dir1, HIGH);
  digitalWrite(M2dir2, LOW);
  digitalWrite(M2dir1, HIGH);
  analogWrite(motor1, 200);
  analogWrite(motor2, 200);
  delay(10000);


}


void loop() {
  // put your main code here, to run repeatedly:
  MoverHaciaAdelante();

}
