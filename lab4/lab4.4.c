#include <stdio.h>

int main(){
  // числа
  unsigned v = 0xA2D3;
  long w = 332;
  
  //Вирази
  unsigned rv = v & 12;
  long rw = w | ~v;
  char result = (unsigned)w / 5;

  printf("Перевірка виразів:\n");
  printf("\nv & 12 = %u & 12 = %u\n", v, rv);
  printf("\n~v = %ld\n", ~v);
  printf("\nw | ~v = %ld | %ld = %ld\n", w, ~v, rw);
  printf("\n(unsigned)w / 5 = %u / 5 = %u\n", w, (unsigned)w / 5);
  printf("Cимвол: '%c'\n", result);
  return 0;
}
