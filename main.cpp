#include <iostream>
#include "func.h"

using namespace std;
int main()
{
	setlocale (LC_ALL, "Rus");
    double a,b;
	char n;
	cout << "Первое число" << endl; cin >> a;
	cout << "Второе число" << endl; cin >> b;
	cout << "выберите выражение" << endl; cin >> n;
    switch(n)
    {
    case '+':
    double Sum(double a, double b);
    case '-':
    double Vich(double a, double b);
    case '*':
    double Umn(double a, double b);
    case '/':
    double Del(double a, double b);

    default: cout << "Ошибка";
    }

	system("pause");
}
