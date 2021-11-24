#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Калькулятор!" << endl;
	cout << "Умножение - (*)" << endl;
	cout << "Деление - (/)" << endl;
	cout << "Сложение - (+)" << endl;
	cout << "Вычитание - (-) " << endl;
	cout << "Деление от остатка - (%)" << endl;
	float PcAnswer;
	float a;
	cout << "Введите первое число примера: ";
	cin >> a;
	char b;
	cout << "Введите символ операции: ";
	cin >> b;
	float c;
	cout << "Введите второе число примера: ";
	cin >> c;
	cout << "Ваш пример: " << a << b << c << endl;
	int a1;
	int c1;


	if (b == '*') {
		PcAnswer = a * c;
	}
	else if (b == '/') {
		if (c == 0) {
			cout << "Нельзя делить на 0";
			return 0;
		}
		PcAnswer = a / c;
	}
	else if (b == '+') {
		PcAnswer = a + c;

	}
	else if (b == '-') {
		PcAnswer = a - c;

	}
	else if (b == '%') {
		if (c == 0) {
			cout << "Нельзя делить на 0";
			return 0;
		}
		a1 = a;
		c1 = c;
		PcAnswer = a1 % c1;


	}
	else {
		cout << "Не корректный пример!!!!!!!!!!!!!";
		return 0;
	}

	cout << a << b << c << " = " << PcAnswer;


	return 0;

}
