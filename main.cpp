#include <iostream>
#include "func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b;
	char n;

    cout << "������� ������ �����" << endl; cin >> a;
    cout << "������� ������ �����" << endl; cin >> b;
    cout << "������� ����������" << endl; cin >> n;
	switch (n)
	{
	case '+':
        cout << "�����: " << Sum(a, b) << endl;
		break;
	case '-':
        cout << "�����: " << Vih(a, b) << endl;
		break;
	case '*':
        cout << "�����: " << Umn(a, b) << endl;
		break;
	case '/':
        cout << "�����: " << Del(a, b) << endl;
		break;

    default: cout << "������" << endl;
	}
	system("pause");
	return 0;
	
}
