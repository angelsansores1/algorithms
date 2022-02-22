#include <stdio.h>


int main(){
    int cont = 1000;
    printf("the number you need:\n");
    scanf("%d",&cont);
    printf("even: \n");
    for (int i = 0; i <= cont; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    printf("odd: \n");
    int ind=0;
    while(ind != cont){
        if(ind % 2 != 0){
            printf("%d\n", ind);
        }
        ind++;
    }
    return 0;
}