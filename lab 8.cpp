#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 //оголошення змінних
    int num, a, b, c;
    cout << "Введіть будь-яке тризначне  число \n num="; //введення значення користувачем
    cin >> num;
    //процес обробки числа
    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;
    ((a < b) && (b < c)) || ((a > b) && (b > c)) ? cout << "YES" : cout << "NO";
}
