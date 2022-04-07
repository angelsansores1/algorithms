#include <stdio.h>

struct student {

int alg;
int fis;
float promedio;
char* name;
char* group; 

};

int main (){
    struct student sonia = {10, 10, 10, "sonia","A"};
    struct student diego = {10, 5, 5, "diego","f"}; 




//show info
printf ("%s: %.1f\n", sonia.name, sonia.promedio);
    return 0;
}