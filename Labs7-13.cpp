#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short programm;
	cout << "[1]Выводить линию\n";
	cout << "[2]Выводить квадрат\n";
	cout << "[3]Выводить прямоугольник\n";
	cout << "[4]Выводить равносторонний треугольник\n";
	cout << "[5]Выводить решётку\n";
	cout << "[6]Выводить крест\n";
	cout << "[7]Выводить плюс\n";


	cin >> programm;
	switch (programm)
	{
	case 1: {
		cout << "Линия!";
		cout << "Введите длинну линии: ";
		short length;
		cin >> length;
		if (length < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Введите текстуру линии: ";
		char texture;
		cin >> texture;
		cout << "Введите направление линии\n[1]Горизонтально\n[2]Вертикально\n";
		short direction;
		cin >> direction;
		short flag = 0;
		if (direction == 1) {
			while (flag != length) {
				cout << texture;
				flag += 1;
			}
		}
		else if (direction == 2) {
			while (flag != length) {
				cout << texture << '\n';
				flag += 1;
			}
		}
		else {
			cout << "Нет такого направления.";
		}
		break;
	}
	case 2: {
		cout << "Квадрат!\n";
		cout << "Введите длинну стороны квадрата: ";
		short length;
		cin >> length;
		if (length < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Введите текстуру квадрата: ";
		char texture;
		cin >> texture;
		cout << "[1]Полый квадрат\n[2]Не полый квадрат\n";
		short cavity;
		cin >> cavity;
		short flag = 0;
		short flag2 = 0;

		if (cavity == 1) {
			while (flag != length)
			{
				cout << texture << " ";
				flag += 1;
			}
			cout << "\n";
			flag = 0;
			while (flag != length)
			{
				cout << texture;
				while (flag2 != length - 1) {
					cout << "  ";
					flag2 += 1;
				}
				flag2 = 0;
				cout << texture;
				flag += 1;
				cout << "\n";

			}

			flag = 0;
			while (flag != length)
			{
				cout << texture << " ";
				flag += 1;
			}
		}
		else if (cavity == 2) {
			while (flag != length)
			{
				cout << texture << " ";
				flag += 1;
			}
			cout << "\n";
			flag = 0;
			short flag2 = 0;
			while (flag != length)
			{
				cout << texture;
				while (flag2 != length - 1) {
					cout << texture << " ";
					flag2 += 1;
				}
				flag2 = 0;
				cout << texture;
				flag += 1;
				cout << "\n";

			}

			flag = 0;
			while (flag != length)
			{
				cout << texture << " ";
				flag += 1;
			}
		}

		break;
	}
	case 3: {
		cout << "Прямоугольник!";
		cout << "Введите длинну первой стороны прямоугольника: ";
		short length1;
		cin >> length1;
		cout << "Введите длинну второй стороны прямоугольника: ";
		short length2;
		cin >> length2;
		if (length1 < 1 or length2 < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Введите текстуру прямоугольника: ";
		char texture;
		cin >> texture;
		cout << "[1]Полый прямоугольник\n[2]Не полый прямоугольник\n";
		short cavity;
		cin >> cavity;
		short flag = 0;
		short flag2 = 0;

		if (cavity == 1) {
			while (flag != length1) {
				cout << texture;
				flag += 1;
			}
			cout << "\n";
			flag = 0;
			while (flag != length2 - 1) {
				cout << texture;
				flag += 1;
				while (flag2 != length2 - 2) {
					cout << " ";
					flag2 += 1;
				}
				flag2 = 0;
				cout << texture << "\n";
			}
			flag = 0;

			while (flag != length1) {
				cout << texture;
				flag += 1;
			}
		}
		else if (cavity == 2) {
			while (flag != length2) {
				flag += 1;
				while (flag2 != length2 - 2) {
					cout << texture;
					flag2 += 1;
				}
				flag2 = 0;
				cout << "\n";
			}
		}
		break;
	}
	case 4: {
		cout << "Вы выбрали треугольник\n";
		cout << "Введите pазмер:";
		short length;
		cin >> length;
		if (length < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Текстуру\n";
		char texture;
		cin >> texture;
		cout << "[1] Наполненный, [2] Пустой\n";
		short cavity;
		cin >> cavity;

		if (cavity == 1) {


			for (int i = 1, k = 0; i <= length; i++, k = 0) {
				for (int j = 1; j <= length - i; j++)
				{
					cout << "  ";
				}
				while (k != 2 * i - 1)
				{
					cout << texture << " ";
					k++;
				}
				cout << "\n";
			}
		}
		else if (cavity == 2) {
			for (int y = 0; y < (length * 2) - 1; y++)
			{
				for (int x = 0; x < (length * 2) - 1; x++)
				{
					if (y == length - 1 || x == (length * 2 - 1) / 2 + y || x == (length * 2 - 1) / 2 - y)
					{
						cout << texture << " ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
		}
		break;
	}
	case 5: {
		cout << "Вы выбрали решётку\n";
		short length1;
		cout << "Введите размер:\n";
		cin >> length1;
		if (length1 < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		short index1, index2 = 0;
		short flag2 = 0;
		if (length1 < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Введите текстуру:\n";
		char texture;
		cin >> texture;
		for (char flag1 = 0; flag1 < length1; flag1++) {

			if (flag1 % 2) {
				for (char flag2 = 0; flag2 < length1; flag2++) {
					cout << texture;
				}
				char flag2 = 0;
				cout << "\n";
			}
			else if (flag1 % 2 == 0)
			{
				for (char flag2 = 0; flag2 < length1 / 2; flag2++) {
					cout << " " << texture;
				}
				cout << "\n";
			}

		}
		break;
	}
	case 6: {
		cout << "Вы выбрали крест\n";
		cout << "Введите pазмер: ";
		short length;
		cin >> length;
		if (length < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Текстуру\n";
		char texture;
		cin >> texture;
		for (short flag1 = 0, flag2 = length + 1, flag3 = 0; flag3 <= length; flag3++)
		{
			for (int flag4 = 1; flag4 <= length; flag4++)
			{
				if (flag4 == flag1 || flag4 == flag2)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			flag1++;
			flag2--;
			cout << endl;
		}
		break;
	}
	case 7: {
		cout << "Вы выбрали плюс!\n";
		cout << "Введите pазмер: ";
		short length;
		cin >> length;
		if (length < 1)
		{
			cout << "Размер < 0";
			exit(0);
		}
		cout << "Текстуру\n";
		char texture;
		cin >> texture;
		if (length <= 0)
		{
			cout << "Размер <= 0";
			exit(0);
		}
		for (short flag1 = 0; flag1 < length; flag1++)
		{
			for (int flag2 = 0; flag2 < length; flag2++)
			{
				if (flag1 == length / 2 || flag2 == length / 2)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}

		break;
	}
	default: {
		cout << "Нет такой опции.";

		break;
	}


	}

	return 0;

}



