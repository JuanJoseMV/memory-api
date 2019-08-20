#include <stdlib.h>
#include <stdio.h>
int main(){
  int *data=(int *)malloc(100*sizeof(int));
  data += 50;
  int *f = data;
  data -= 50;
  free(f);
  printf("Valor data[49]: %d\n", *(f + 49));  
  printf("Valor data[50]: %d\n", *(f + 50));
  return 0;
}