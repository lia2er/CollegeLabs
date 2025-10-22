#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Змінні
    double U;
    double F;

    // Оголошення констант
    const double PI = 3.14;
    const double D = 0.865;
    const double d = 0.532;
    const double g = 9.81;
    const double alpha_deg = 123.0;
    const double gama = 1.63;
    const double h = 245.6;

    // Переведення градусів у радіани
    double alpha_rad = alpha_deg * PI / 180.0;

    // Обчислення
    F = g * h * gama;
    double upper = 4 * F * cos(alpha_rad);
    double bottom = PI * ((D * d) - (d * d));
    U = upper / bottom;

    // Вивід даних
    cout << fixed << setprecision(2);
    cout << "F = " << F << endl;
    cout << "U = " << U << endl;

    return 0;
}

