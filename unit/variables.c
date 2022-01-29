
#include <stdio.h>
#include "sum.h"
  //variables Globales
  //Data types integer, flotatantes, string(cadenas de texto), caracteres

int edad =19;
float estatura = 1.69; 
char* name = "Angel Sansores";
char sexo = 'M';

int main(){
    int after10years = suma(edad, 10);
    printf("mi edad despes de 10 años: %d\n", after10years); 

    return 0;
}