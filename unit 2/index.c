# include <stdio.h>

int myArray [ 3] = {5,  2, 3};
int x = 0; 


int main (){
printf("[");
void printArray (int myArray[3], int arrayLength){

while (x < 3){
     printf ("%d", myArray[x]);
    if (x<2){
        printf(",");
    }
               x++;
 }

}
 

printArray (myArray, 3);
printf("]\n");

    return 0;
}