#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int random_number(int upper_limit){
  
  int temp;

  temp = rand() % upper_limit;

  return temp;

}

int main(void)
{

  int num;
  time_t t;
  
  srand((unsigned) time(&t));

  num = random_number(100);

  printf("%d\n", num);

  return 0;
}



