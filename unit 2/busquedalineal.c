#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int sizeArray, int valueToFind){
    printf("funcion ejecutada\n");
    for  (int i = 0; i < sizeArray; i++){
        printf("current Index: %d   arreglo data: %d\n", i, arr[i]);
        if (arr[i] == valueToFind){
            return i;
        }
    }
    return -1;
};

int main(int arc, char ** argv){
 
 int arr[5] = {50, 5 , 1, 37, 4};
 int indexFound = linearSearch(arr, 5, atoi(argv[1]));
    printf("index Found: %d\n", indexFound); 

    return 0;
}