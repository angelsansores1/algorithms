#include <stdio.h>

int higher(int arr[], int len){
    int h;
    for (int x =0; x < len -1; x++){
        if (arr[x]> arr [x+1]){
            h = arr[x];
        }
        else{
            h = arr[x+1];
    }
    }
    return h;
}

int main(){
    int arr[] = {0,0,0};
    int len = sizeof(arr)/sizeof(int);
    printf("put the numbers: \n");
    scanf("%i%i%i", &arr[0],&arr[1],&arr[2]);
    int max = higher(arr,len);
    printf("The greates is: %d \n", max);
    return 0;
}