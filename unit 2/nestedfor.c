#include <stdio.h>
#include "../libraries/utils.h"
#include <stdlib.h>

int main( int argc, char** argv){


    for(int i = 0 ; i<= atoi(argv[1]); i = i + 1) {
    printf ("i:%d\n", i);
    sleep(1000);

    for(int j = 2; j< atoi (argv[2]); j ++){
    printf("j:%d\n", j );
    sleep(1000);

    }

    };

    return 0;
}