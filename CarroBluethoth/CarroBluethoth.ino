#include <SoftwareSerial.h>
#define motor1 3
#define motor2 6
#define M1dir1 4//motor1 con direccion 1
#define M1dir2 5//motor1 con direccion 2 
#define M2dir1 7//motor2 con direccion 1
#define M2dir2 8//motor2 con direccion 2
/*ojo la direccion 1 es hacia adelante, mientras que la
  direccion dos va hacia atras*/
SoftwareSerial BT(9, 10);//el puto rx y tx va al revez pelotudo
char dato;
void setup() {
  // put your setup code here, to run once:++++
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(M1dir1, OUTPUT);
  pinMode(M1dir2, OUTPUT);
  pinMode(M2dir1, OUTPUT);
  pinMode(M2dir2, OUTPUT);
  //se inicializa cada uno de los puertos
  BT.begin(9600);
  Serial.begin(9600);
}
void MoverHaciaAdelante(void) {
  digitalWrite(M1dir2, LOW);
  digitalWrite(M1dir1, HIGH);
  digitalWrite(M2dir2, LOW);
  digitalWrite(M2dir1, HIGH);
  delay(1000);
}
void Frenar (void) {
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
}
void MoverHaciaAtras(void) {
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  //delay(100);
  digitalWrite(M1dir2, HIGH);
  digitalWrite(M1dir1, LOW);
  digitalWrite(M2dir2, HIGH);
  digitalWrite(M2dir1, LOW);
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  delay(1000);

}
void MoverHaciaIzquierda(void) {
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  //delay(100);
  digitalWrite(M1dir2, HIGH);
  digitalWrite(M1dir1, LOW);
  digitalWrite(M2dir2, HIGH);
  digitalWrite(M2dir1, HIGH);
  analogWrite(motor1, 150);
  digitalWrite(motor2, HIGH);
  delay(1000);

}
void MoverHaciaDerecha(void) {
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  //delay(100);
  digitalWrite(M1dir2, HIGH);
  digitalWrite(M1dir1, LOW);
  digitalWrite(M2dir2, HIGH);
  digitalWrite(M2dir1, HIGH);
  analogWrite(motor2, 150);
  digitalWrite(motor1, HIGH);
  delay(1000);

}


void loop() {
  if (BT.available() > 0) //revisa si se recibe datos
  {
    dato = BT.read();
    Serial.println(dato);
    if (dato == 'a') {
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, HIGH);
      MoverHaciaAdelante();
    }
    if (dato == 'r') {
      MoverHaciaDerecha();
    }
    if (dato == 'l') {
      MoverHaciaIzquierda();
    }
    if (dato == 'b') {
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, HIGH);
      MoverHaciaAtras();
    }
    if (dato == 'f') {
      Frenar();
    }

  }

}
