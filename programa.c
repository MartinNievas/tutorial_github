#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int random_number(int upper_limit){
  
  return rand() % upper_limit;

}

int main(void)
{

  time_t t;
  
  srand((unsigned) time(&t));

  printf("%d\n", random_number(100));

  return 0;
}



