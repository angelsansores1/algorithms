#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv){
     int number= atoi (argv[1]);
    bool result = (number % 2 == 0);

      if(result == true){
          printf("the number is even");
      } else {
          printf("the number is odd");
      };
      
      return 0;

} 
