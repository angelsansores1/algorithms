 #include <stdio.h>
 #include <stdlib.h>
 #include "../libraries/utils.h"

   
 int main ( int argc, char** argv){
for(int month = 1; month<= atoi(argv[1]); month = month + 1) {
    printf ("month:%d\n", month);
    if (month > 12) {
     break;
}


for(int d = 1; d< atoi (argv[2]); d ++){
    printf("d:%d\n", d );
    if (d > 30) {
     break;
}

    }

    };

return 0;

 }