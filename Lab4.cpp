#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Месяц года\n[1] Январь\n[2] Февраль\n[3] Март\n[4] Апрель\n[5] Май\n[6] Июнь\n[7] Июль\n[8] Август\n[9] Сентябрь\n[10] Октябрь\n[11] Ноябрь\n[12] Декабрь\nВыберите месяц: ";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Вы выбрали Январь";
		break;
	case 2:
		cout << "Вы выбрали Февраль";
		break;
	case 3:
		cout << "Вы выбрали Март";
		break;
	case 4:
		cout << "Вы выбрали Апрель";
		break;
	case 5:
		cout << "Вы выбрали Май";
		break;
	case 6:
		cout << "Вы выбрали Июнь";
		break;
	case 7:
		cout << "Вы выбрали Июль";
		break;
	case 8:
		cout << "Вы выбрали Август";
		break;
	case 9:
		cout << "Вы выбрали Сентябрь";
		break;
	case 10:
		cout << "Вы выбрали Октябрь";
		break;
	case 11:
		cout << "Вы выбрали Ноябрь";
		break;
	case 12:
		cout << "Вы выбрали Декабрь";
		break;
	default:
		cout << "Проверьте значение и повторите попытку";
		break;
	}
	return 0;
}