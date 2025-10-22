#include <stdio.h>

#define TEXT "Ви виконали першу програму!"

int main(){
  char name[15];
  printf("\n\n Ваше ім'я - ");
  scanf("%s",name);
  printf("\n Вітаємо, %s! %s\n",name,TEXT);
  return 0;
}
