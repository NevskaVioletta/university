#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 //���������� ������
    int num, a, b, c;
    cout << "������ ����-��� ���������  ����� \n num="; //�������� �������� ������������
    cin >> num;
    //������ ������� �����
    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;
    ((a < b) && (b < c)) || ((a > b) && (b > c)) ? cout << "YES" : cout << "NO";
}
