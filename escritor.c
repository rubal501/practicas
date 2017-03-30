#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string>
int main()
{
	/* code */
	std:string nommbre;
    char nombre[10];
	printf("Dame el nombre del archivo que  quieres crear\n");
	scanf(nombre);
	
    FILE *arch;
	char linea[30], fin[5]="";
	arch = fopen(,"w");
	
	do
	{
		printf("palabra:");
		gets(linea);
		fputs("\n",arch);
		fputs(linea,arch);
	}while(strcmp(linea,fin)!=0);
	fclose(arch);
	getch();
	return 0;
}
