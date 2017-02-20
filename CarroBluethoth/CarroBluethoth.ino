#include <SoftwareSerial.h>
#define motor1 3
#define motor2 6
#define M1dir1 4//motor1 con direccion 1
#define M1dir2 5//motor1 con direccion 2 
#define M2dir1 7//motor2 con direccion 1
#define M2dir2 8//motor2 con direccion 2
/*ojo la direccion 1 es hacia adelante, mientras que la
direccion dos va hacia atras*/
SoftwareSerial BT(9,10);
char dato;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(M1dir1, OUTPUT);
  pinMode(M1dir2, OUTPUT);
  pinMode(M2dir1, OUTPUT);
  pinMode(M2dir2, OUTPUT);
  //se inicializa cada uno de los puertos
  BT.begin(9600);
}
void MoverHaciaAdelante(void){
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  //delay(100);
  digitalWrite(M1dir2, LOW);
  digitalWrite(M1dir1, HIGH);
  digitalWrite(M2dir2, LOW);
  digitalWrite(M2dir1, HIGH);
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
}
void Frenar (void){
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
}
void MoverHaciaAtras(void){
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  //delay(100);
  digitalWrite(M1dir2, HIGH);
  digitalWrite(M1dir1, LOW);
  digitalWrite(M2dir2, HIGH);
  digitalWrite(M2dir1, LOW);
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);

}


void loop() {
  if(BT.available() > 0)  //revisa si se recibe datos
   {
      switch(dato){
        case '1':
          MoverHaciaAdelante();
        case '2':
          MoverHaciaAtras();
        case '0':
          Frenar();
        default:
          Frenar();
      }
   }

}
//NOTA AL CALCE: Crear funciones para desplazarce a los lados
