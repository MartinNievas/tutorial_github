#include <stdio.h>
#include <stdlib.h>

int random_number(int upper_limit){
  
  int temp;

  temp = rand() % upper_limit;

  return temp;

}

int main(void)
{

  int num;

  num = random_number(100);

  printf("%d\n", num);

  return 0;
}



