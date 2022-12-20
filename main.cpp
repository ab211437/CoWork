#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b;
	char n;
	cout << "Первое число" << endl; cin >> a;
	cout << "Второе число" << endl; cin >> b;
	cout << "Выберите выражение" << endl; cin >> n;
	switch (n)
	{
	case '+':
		cout << "Ответ: " << a + b << endl;
		break;
	case '-':
		cout << "Ответ: " << a - b << endl;
		break;
	case '*':
		cout << "Ответ: " << a * b << endl;
		break;
	case '/':
		cout << "Ответ: " << a / b << endl;
		break;

	default: cout << "Ошибка" << endl;
	}
	system("pause");
	return 0;
	
}
