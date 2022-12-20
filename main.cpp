#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Rus");
	double a,b,c;
	char n;
	cout << "Первое число" << endl; cin >> a;
	cout << "Второе число" << endl; cin >> b;
	cout << "выберите выражение" << endl; cin >> n;
	
	
	
	
	
	switch (n)
    {
        case '1':   c=a+b;
                    break;
 
        case '2':   c=a-b;
                    break;
 
        case '3':   c=a*b;
                    break;
 
        case '4':   c=a/b;
                    break;
 
        default:    cout <<"Не верное значение."; 
    }

	cout << "Результат :" << c << endl;


	system("pause");
}