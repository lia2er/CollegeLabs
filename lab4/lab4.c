#include <stdio.h>

int main(){
  unsigned v = 0xa2d3;
  long w = 332;
  
  printf("\n rv: %4d rw: %#08lx \n result -> %c\n", 
      v&12, w | ~v, (unsigned)w/5);
}
