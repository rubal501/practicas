#include<SoftwareSerial.h>
SoftwareSerial BT(10,11);
int led = 13; 
int data;
 
void setup()
{
   BT.begin(9600);
   pinMode(led, OUTPUT); //establecemos 13 como salida
   Serial.begin(9600); //iniciando Serial
}
 
void loop(){
  if(BT.available()){
    data = BT.read();
    Serial.println(data);
    
    }
  
  }

    