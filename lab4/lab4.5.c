#include <stdio.h>

int main(){
  int nums = 0;
  char ch = 'a';
  while(true){  
    printf("Введіть ціле десяткове число(0 щоб вийти): ");
    scanf("%d", &nums);
    if (nums == 0) break;

    printf("\nВаше число - %d\n", nums);
    printf("\nВведіть специфікатор типу(i, u, x, X, o, c):");
    scanf(" %c", &ch);
  
    if (ch == 'i')  printf("Конвертоване число - %i\n", nums);
    if (ch == 'u')  printf("Конвертоване число - %u\n", nums);
    if (ch == 'x')  printf("Конвертоване число - %x\n", nums);
    if (ch == 'X')  printf("Конвертоване число - %X\n", nums);
    if (ch == 'o')  printf("Конвертоване число - %o\n", nums);
    if (ch == 'c')  printf("Конвертоване число - %c\n", (char)nums);
    
  }
  return 0;
}
