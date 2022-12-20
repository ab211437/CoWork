#include <iostream>
#include "func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b;
	char n;

    cout << "Введите первое число" << endl; cin >> a;
    cout << "Введите второе число" << endl; cin >> b;
    cout << "Введите выражениие" << endl; cin >> n;
	switch (n)
	{
	case '+':
        cout << "Ответ: " << Sum(a, b) << endl;
		break;
	case '-':
        cout << "Ответ: " << Vih(a, b) << endl;
		break;
	case '*':
        cout << "Ответ: " << Umn(a, b) << endl;
		break;
	case '/':
        cout << "Ответ: " << Del(a, b) << endl;
		break;

    default: cout << "Ошибка" << endl;
	}
	system("pause");
	return 0;
	
}
