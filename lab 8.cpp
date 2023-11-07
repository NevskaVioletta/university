#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;

int main()
{
    //кирилиц€
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num, a, b, c; //оголошенн€ зм≥нних
    cout << "¬вед≥ть будь-€ке тризначне  число \n num="; //введенн€ значенн€ користувачем
    cin >> num;
    //процес обробки числа
    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;
    ((a < b) && (b < c)) || ((a > b) && (b > c)) ? cout << "YES" : cout << "NO";
}
