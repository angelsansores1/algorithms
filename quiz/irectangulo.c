/* Design the algorithm for a program that obtain the length and width of a rectangle from the user. Calculate and output the area. If the length and width are equal, output a message indicating that the figure is a square. Make a list of variables, draw the flowchart, and perform a desk check using 
the following: 4, 8, 5, 5 (Paste your Github link in the textbox)*/

#include <stdio.h>
int num1;
int num2;

int main(){
    printf("insert the values:");
    scanf("%i%i",&num1,&num2);

        if (num1 <= 0, num2 <= 0 ){
           printf("The imputs are not valids\n");
    }
                 else{
    int a = num1*num2;

        if (num1 == num2){
        printf("the figure is a square\n");
         }
                  else {
        printf("the ara is: %d\n", a);
    }
        }
    return 0;
}