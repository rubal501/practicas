#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
float buscarDistancia(double x1, double x2, double y1, double y2){
      double cuad = 2;
      float distancia=sqrt(pow(x1-x2,cuad)+pow(y1-y2,cuad));
      return distancia;
      }
float buscarPuntoMediox(float x1, float x2){
      float puntoMediox= (x2+x1)/2;
      return puntoMediox;
      }
float buscarPuntoMedioy(float y1, float y2){
      float puntoMedioy= (y2+y1)/2;
      return puntoMedioy;
      }
float buscarPendiente(float x1, float x2, float y1, float y2){
      float pendiente=(y2-y1)/(x2-x1);
      return pendiente;
      }
int main()
{
	/* code */
	char opcion;
	double x1,x2,y1,y2;
	cout<<"------------------------------------------------------------------------------"<<endl
	<<"////////////////////////////////////////////////////////////////////////////////"<<endl;
	inicio:
	cout<<"bienvenido usuario que opercion quiere realizar"<<endl<<"presione la ocion que dese:"<<endl<<"(a) obtener la distanciaentre dos punto"<<endl
    <<"(b) obtener punto medio entre dos puntos"<<endl
    <<"(c) obtener pendiente entre dos puntos"<<endl
    <<"(q) para salir"<<endl
    <<"////////////////////////////////////////////////////////////////////////////////"<<endl
    <<"------------------------------------------------------------------------------"<<endl;
	cin>>opcion;
	cout<<"Dame la primera x"<<endl;
	cin>>x1;
	cout<<"Dame la primera y"<<endl;
	cin>>y1;
	cout<<"Dame la segunda x"<<endl;
	cin>>x2;
	cout<<"Dame la segunda y"<<endl;
	cin>>y2;
	if(opcion == 'a'){
		cout<<"la distancia es igual a:"<<buscarDistancia(x1,x2,y1,y2)<<endl;
	}
	if (opcion == 'b')
	{
		if (x1 == x2 || y1 == y2)
		{
			cout<<"NO ES UN SEGMENTO"<<endl;
		}
		else
		{ 
		cout<<"punto medio es igual a ("<<buscarPuntoMediox(x1,x2)<<","<<buscarPuntoMedioy(y1,y2)<<")"<<endl;
		}
	}
	if (opcion == 'c')
	{
       cout<<"la pendiente entre los dos puntos: "<<buscarPendiente(x1,x2,y1,y2) <<endl;
	}
	if (opcion == 'q')
	{
		system("cls");
		cout<<"adios"<<endl;
	}
	else{
		system("cls");
		cout<< "inserte una opcion valida"<<endl;
		goto inicio;
	}
	getch();
	return 0;
}
