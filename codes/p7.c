#include <stdlib.h>
#include <stdio.h>
int main(){
  int *data=(int *)malloc(100*sizeof(int));
  int *p = data + 50;
  free(data);
  printf("Valor data[50]: %d\n", *(p + 50));
  return 0;
}