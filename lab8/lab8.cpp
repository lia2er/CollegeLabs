
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // Константи
  const float rigDepth = 1800.0; // Глибина свердловини
  const float p = 1300.0;        // Густина розчину
  const float Step = 150.0;      // Крок
  const float g = 9.81;          // Швидкість вільного падіння
  
  // Змінні
  float Pressure = 0.0;          // Тиск рідини
  float h = 0.0;                 // Глибина
  
  // Виведення назв стовпців з форматуванням
  cout << "\t|" << setw(20) << "Тиск в Па"  // setw() - відступ зліва
                                            // враховуючи довжину виводу
        << setw(6) << "|" << setw(20) << "Тиск в MПа" 
        << setw(6) << "|" << setw(16) << "Глибина" 
        << setw(6) << "|" << endl;
  while(true){ 
    if (h>rigDepth) {  // Глибина > глибини свердловини - вихід з циклу
      cout << "\t------------------------------------------------------" << endl; 
    break;
    }
    else{  // Обчислення проводяться поки - глибина <= глибини свердловини 
      Pressure = p * g * h;  // Обчислення тиску рідини
      cout << "\t|----------------------------------------------------|" << endl;

      cout << fixed << setprecision(2) 
         << "\t|" << setw(13) << Pressure 
         << setw(6) << "|" << setw(13) << Pressure/1000000.0 // Вивід тиску 
                                                             // в мега Паскалях
         << setw(6) << "|" << setw(10) << h 
         << setw(5) << "|" << endl;
      h += Step;
    }
  }
  return 0;
}
