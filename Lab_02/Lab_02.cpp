// Lab_02.cpp 
// < Батюк Михайло > 
// Лабораторна робота № 2.1 
// Лінійні програми. 
// Варіант 8

#include <iostream>
#include <cmath>   // для sin(), cos(), pow()

using namespace std;

int main()
{
    double x;  // вхідний параметр
    double y;  // вхідний параметр
    double z1; // результат обчислення першого виразу
    // double z2; // результат обчислення другого виразу
    
    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;

    z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1; // Обчислення z1

    // z2 = sin(y + x) * sin(y - x); // Обчислення z2

    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;

    return 0;
}