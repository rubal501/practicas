
int cont = 0;
int kont = 255;
int e = 51;
//cont se refiere al contador del led 10
//kont es el contador de led 11

void setup() {

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  //define el modo de los leds
}


void loop() {

    analogWrite(10,cont);
    
    analogWrite(11,kont);
    delay(1000);
 
    cont = cont +e;
    kont = kont -e;

    //cuando los contadores lleguen al final del ciclo esto hace que se reinicie
    //creo que podria hacerse en un while
    if(cont==255||cont==0){
      e = -1*e;
      /*
    wdasdfasd   dasdasddas  asddasd*/
    }
 


}
