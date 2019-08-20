#include <stdlib.h>
#include <stdio.h>

int main(){
  int *data = (int *)malloc(100*sizeof(int));
  *(data+ 2) = 5;
  free(data);
  printf("Valor data[2]: %d\n", *(data + 2));
  return 0;
}
