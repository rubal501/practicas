#include <conio.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
  //esta Version es para solo 10 digitos
  char lista[20][10];
  int  bandera;
  char aux[20];
  for (int i = 0; i < 10; ++i)
  {
    printf("dame una palabra: ");
    gets(lista[i]);
  }
  //esta parte se encarga de ordenar los numeros
  bandera = 1;
  while (bandera == 1) {
    bandera = 0;
    for (int g = 0; g < 8; ++g)
    {
      if (strcmp(lista[g], lista[g + 1]) > 0)
      {
        strcpy(aux, lista[g]);
        strcpy(lista[g], lista[g + 1]);
        strcpy(lista[g + 1], aux);
        bandera = 1;
      }
    }

  }


  for (int d = 0; d < 10; ++d)
  {
    printf("\n");
    puts(lista[d]);
  }
  getch();
  return 0;
}

