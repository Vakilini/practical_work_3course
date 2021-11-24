#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Программа 'Времена года'" << endl;
	cout << "[1] Лето" << endl;
	cout << "[2] Осень" << endl;
	cout << "[3] Зима " << endl;
	cout << "[4] Весна" << endl;
	cout << "Сделайте выбор: ";
	int answer;
	cin >> answer;
	if (answer == 1) {
		cout << "Сейчас лето. Будет жарко)";
	}
	else if (answer == 2) {
		cout << "Сейчас осень. Берите зонтик";
	}
	else if (answer == 3) {
		cout << "Сейчас зима. Одевайтесь теплее";
	}
	else if (answer == 4) {
		cout << "Сейчас весна. Время любви!";
	}
	else {
		cout << "Нет такого времени года";
	}


	return 0;
}