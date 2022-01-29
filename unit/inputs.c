#include <stdio.h>

int num1; //Declarando mi variable 
int num2; 

int main (){

    //imprint mensaje

printf("Enter num 1: \n\tnum1:"  );
scanf("%d" , &num1);
printf("Enter num 2: \n\tnum2:"  );
scanf("%d" , &num2);
 
   //process 
   int sum = num1 + num2;
   printf("suma= %d\n", sum);



return 0;
}