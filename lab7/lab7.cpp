#include <stdio.h>
#include <math.h>


int main(){
  // Константи
  const float a = 1.85;
  const float b = 6.21;

  const float loopDefault = 22.0;  // Початкове значення 
                                   // параметра циклу

  const float loopEnd = 3.1; // Кінцеве значення параметра циклу
  const float loopStep = -2.1;   // Крок зміни параметра циклу      

  
  // Змінні
  float g = 0.0;
  float t = 0;
  
  // Умовний цикл FOR бере аргумент, умову
  // і виконує код необхідну кількість ітерацій
  for (g=loopDefault;g>loopEnd;g-=loopStep){
    t = a * b * (1 - sin(g + 5)) + sqrt(b - pow(cos(g), 1/2));
    printf("g = %.2f\tt = %.2f\n", g, t);
  }
  
  return 0;
}
