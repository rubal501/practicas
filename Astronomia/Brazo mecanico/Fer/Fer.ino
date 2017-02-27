#define umbral  70
#define precision 10
int angulo1, angulo2, diferencia, B, A;
int pin1 = 6;
int pin2 = 5;
int pinEntrada = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pinEntrada, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
  //map(angulo1,0,1024,0,100);
}

void loop() {
  // put your main code here, to run repeatedly:
  angulo1 = analogRead(pinEntrada);

  //falta una manera para que interactue con el usuario
  angulo2 = analogRead(A1);
  diferencia = angulo2 - angulo1;
  Serial.print(angulo1);
  Serial.print("  ");
  Serial.println(angulo2);
  if (abs(diferencia) < precision)
  {
    analogWrite(pin1, 0);
    analogWrite(pin2, 0);
  }
  else
  {
    if (diferencia > 0)
    {
      analogWrite(pin2, 0);
      analogWrite(pin1, diferencia + umbral);
    }
    if (diferencia < 0)
    {
      analogWrite(pin1, 0);
      analogWrite(pin2, -diferencia + umbral);
    }
  }
  delay(10);
}
