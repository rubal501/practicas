#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
int main(void)
{
	/* code */
	char pwd[30], usr[30];
	int i, cont;
	strcpy(pwd, "hola");
	do
	{
    printf("\nintroduce la contraseña \xA4\aa:\n");
	i = 0;
	cont ++;
	do
	{
		usr[i] = getch();
		if(usr[i]!=13 && usr[i]!=8)
		{
			printf("*");
			i++;
		}
		if (usr[i]==8 && i >=1)
		{
			usr[i]= ' ';
            printf( "\b \b");
			i--;
		}
	}
	while(usr[i]!=13);
	usr[i] = '\0';
	if (strcmp(usr,pwd)==0)
	{
		printf("\nconstraseñao");
	}
	else
	{
		printf("\ncontraseña incorrecta");
	}
}while(strcmp(usr,pwd)!=0||cont==3);
if (strcmp(usr,pwd)==0){
printf("bievenido");
}
else
{
    printf("cuenta bloqueada");
    }
getch();
	return 0;
}
