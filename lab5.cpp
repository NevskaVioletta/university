// Лаб 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//оголошення змінних
	int x, a, b, c;
	float f;
	cout << "Введіть значення для x: ";
	cin >> x;
	cout << "Введіть значення для a: ";
	cin >> a;
	cout << "Введіть значення для b: ";
	cin >> b;
	cout << "Введіть значення для c: ";
	cin >> c;
	if (a < 0 && x != 0) {
		f = a * x ^ 2 + b ^ 2 * x;
	}
	else if (a > 0 && x == 0 && c != 0)
	{
		f = x - a / (x - c);
	}
	else if (c != 0) { f = 1 + x / c; } 
	else { cout << "Розв'язку немає "; return(0); };
	cout << setw(8) << setprecision(3) << "Відповідь=" << f << endl;

}


#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//оголошення змінної
	int x;
	cout << "Введіть число від 1-3 \n  1-Квадрат \n  2-Трикутник \n  3-Хрестик : ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "******" << endl << "*" << setw(5) << "*" << endl << "*" << setw(5) << "*"  << endl << "******"; break;
	case 2: cout << setw(5) << "*" << endl << setw(6) << "***" << endl << setw(7) << "*****" << endl << setw(8) << "*******"; break;
	case 3: cout << "*" << setw(6) << "*"<< endl<< setw(4) << "*"<< endl<< "*" << setw(6) << "*"; break;
	default: cout << "Треба число від 1-3"; break;
	}
}

