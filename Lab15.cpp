#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Программа Лабиринт\n";
	cout << "Выберите размер карты:\n [1] 15x15;\n [2] 20x20; \n[3] 30x30\n";
	short size;
	cin >> size;
	switch (size)
	{
	case 1: {
		int L[15][15] = {
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	0,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	0,	0,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	0,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	0,	0,	0},
			{1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	1,	1,	1,	1,	0},
			{1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	0},
			{1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	0},
			{1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	0,	0,	0,	0},
			{1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1}
		};

		for (short i = 0; i <= 15; i++) {
			for (short f = 0; f <= 15; f++) {
				if (L[i][f] == 1) {
					cout << '#';
				}
				else {
					cout << ' ';
				}
			}
			cout << '\n';
		}
		break;
	}
	case 2: {
		int L[20][20] = {
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1},
			{0,	0,	0,	0,	0,	0,	1,	1,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1},
			{0,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{0,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{0,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	0,	0,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	1,	1,	0,	1,	1,	1,	1,  1,	1,	1},
			{1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1},
		};
		for (short i = 0; i <= 20; i++) {
			for (short f = 0; f <= 20; f++) {
				if (L[i][f] == 1) {
					cout << '#';
				}
				else {
					cout << ' ';
				}
			}
			cout << '\n';
		}
		break;
	}
	case 3: {
		int L[30][30] = {
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,  1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	0,	0,	0,  0,	0,	0,	0,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},
			{1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},

		};
		for (short i = 0; i <= 30; i++) {
			for (short f = 0; f <= 30; f++) {
				if (L[i][f] == 1) {
					cout << '#';
				}
				else {
					cout << ' ';
				}
			}
			cout << '\n';
		}
	}
	default:
		cout << "Нет такого размера(";
		break;
	}
	return 0;

}



