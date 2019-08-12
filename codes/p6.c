#include <stdlib.h>

int main(){
  int *data=(int *)malloc(100*sizeof(int));
  free(data);
  printf("Valor data[2]: %d", *(data + 2));
  return 0;
}
