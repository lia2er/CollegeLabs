#include <stdio.h>

int main(){
  unsigned int v = 0xA2D3;
  int w = 312;

  for(int i = 0; i<=50; i++)
    printf("-"); 

  printf("\nСпецифікації формату: \n");
  printf("Ціло-числовий %%d - %4d \n",v);
  printf("Додатні та від'ємні цілі числа %%i - %4i \n",v);
  printf("Лише додатні цілі числа %%u - %4u \n",v);
  printf("Шістнадцяткові значення(малі літери) %%x - %4x \n",v);
  printf("Шістнадцяткові значення(великі літери) %%X %4X \n",v);
  printf("Вісімкові значення %%o - %4o \n",v);
  printf("Символи %%c - %4c \n",w);

  for(int i = 0; i<=50; i++)
    printf("-");

  printf("\nСпецифікації формату: \n");
  printf("Дробове число %%f - %f \n",w);
  printf("Малий експонент %%e - %e \n",w);
  printf("Великий експонент %%E - %E \n",w);
  printf("Дріб з заданою точністю %%g - %g \n",w);
}
