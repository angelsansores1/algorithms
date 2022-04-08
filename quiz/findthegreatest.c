#include <stdio.h>
int higher(int arr[], int len){
    for ( int a = 0;a < len; a++){
        for (int x = 0 ;x < len -1; x ++){
            if(arr[x] > arr[x+1]){
                int num1 = arr[x];
                arr[x] = arr[x+1];
                arr[x+1] = num1;
            }
        }
    }
    int h = arr[len-1];
        
    return h;
}

int main(){int arr[] = {0,0,0};int len = sizeof(arr)/sizeof(int);

    printf("tyoe 3 numbers: \n");
        scanf("%i%i%i", &arr[0],&arr[1],&arr[2]);
int max = higher(arr,len);
    printf("The greates is: %d \n", max);
    return 0;
}