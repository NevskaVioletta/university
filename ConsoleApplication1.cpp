//перший варіант

/*#include <iomanip>
#include <math.h>
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	//кирилиця
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
	double a = 1, b = 5, h = 0.4, x, y;
	cout << "Проміжок [" << a << "; " << b << "] крок " << h << endl;
	x = a;
	while (x<=b) {
		y = log(pow(x,3))+2*cos(x)-2 ;
		cout << "Якщо x = " << x << ", то y = " << y << endl;
		x += h;
	}
}*/

//другий варіант

/*#include <iomanip>
#include <math.h>
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	//кирилиця
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a = 1, b = 5, h = 0.4, x, y;
	cout << "Проміжок [" << a << "; " << b << "] крок " << h << endl;
	x = a;
	do {
		y = log(pow(x, 3)) + 2 * cos(x) - 2;
		cout << "Якщо x = " << x << ", то y = " << y << endl;
		x += h;
	} while (x <= b);
}*/
