#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // Оголошення констант
  const float a = -2.0f;
  const float b = -8.0f;
  const float PI = 3.14;

  // Оголошення змінних
  float i;
  float y;

  cout << "Введіть i: ";
  cin >> i;
  
  // Перша гілка
  if (i < b) {
      y = pow(b,3) + pow(log(fabs((PI)+fabs(i))),2);  // pow - піднесення до степеня
      cout << "Гілка 1: y = b^3+ln^2|i+PI| = "        // ln - натуральний логарифм
        << fixed << setprecision(2) << y << endl;     // endl - перехід на новий рядок
      cout << "Ваш аргумент: i = " << fixed << setprecision(2)
        << i << endl << "Результат: y=" << y << endl;
  }

  // Друга гілка
  else if (i > a) {
      y = pow(i,3) + pow(log(fabs((PI)+fabs(i))),2);
      cout << "Гілка 2: y = i^3+ln^2|i+PI| = " 
        << fixed << setprecision(2) << y << endl;
      cout << "Ваш аргумент: i = " << fixed << setprecision(2)
        << i << endl << "Результат: y=" << y << endl;
  }
  
  // Коли ніяка з умов не виконується
  else {
      cout << "функція не визначена для цього i." << endl;
  }

  return 0;
}
