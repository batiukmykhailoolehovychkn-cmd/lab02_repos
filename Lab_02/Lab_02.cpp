// Lab_02.cpp 
// < ����� ������� > 
// ����������� ������ � 2.1 
// ˳��� ��������. 
// ������ 8

#include <iostream>
#include <cmath>   // ��� sin(), cos(), pow()

using namespace std;

int main()
{
    double x;  // ������� ��������
    double y;  // ������� ��������
    double z1; // ��������� ���������� ������� ������
    // double z2; // ��������� ���������� ������� ������
    
    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;

    z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1; // ���������� z1

    // z2 = sin(y + x) * sin(y - x); // ���������� z2

    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;

    return 0;
}