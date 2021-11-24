#include <iostream>

using namespace std;
short menu();
void doesClearConcol();
void doesTextColor();
void doesConsolColor();
void getSizeINT();
void getSizeCHAR();
void getSizeDOUBLE();
void getSizeFLOAT();
void getSizeBOOL();
void ShowMessageHello();
void MakesSquare();


int main() {
	setlocale(0, "");
	short NomberFunction;
	NomberFunction = menu();
	switch (NomberFunction) {
	case 1: {
		doesClearConcol();
		break;
	}
	case 2: {
		doesConsolColor();
		break;
	}
	case 3: {
		doesTextColor();
		break;
	}
	case 4: {
		getSizeINT();
		break;
	}
	case 5: {
		getSizeCHAR();
		break;
	}
	case 6: {
		getSizeDOUBLE();
		break;
	}
	case 7: {
		getSizeFLOAT();
		break;
	}
	case 8: {
		getSizeBOOL();
		break;
	}
	case 9: {
		ShowMessageHello();
		break;
	}
	case 10: {
		MakesSquare();
		break;
	}

	default: {
		break;
	}
	}
	return 0;

}
//Функция меню
short menu() {
	cout << "Вас приветсвует программа 'Функции'.\n " << endl;
	cout << "[1] Использовать функцию по очистки консоли\n" << endl;
	cout << "[2]Использовать функцию для изменения цвета фона консоли\n" << endl;
	cout << "[3]Использовать функцию для изменения цвета текста консоли\n" << endl;
	cout << "[4]Использовать функцию для вывода размера типа данных int \n" << endl;
	cout << "[5]Использовать функцию для вывода размера типа данных char\n" << endl;
	cout << "[6]Использовать функцию для вывод размера типа данных DOUBLE \n" << endl;
	cout << "[7]Использовать функцию для вывод размера типа данных FLOAT\n" << endl;
	cout << "[8]Использовать функцию для вывод размера типа данных BOOL\n" << endl;
	cout << "[9]Использовать функцию для вывод сообщения “Привет я функция”\n" << endl;
	cout << "[10]Использовать функцию для вывод квадрата 5x5\n" << endl;
	short user_input;
	cin >> user_input;
	while (user_input < 1 and user_input < 10) {

		if (user_input == 0) {
			exit(0);
		}
		cout << "Нет такого пункта. Введите номер пункта(1-10) или для выхода из программы введите 0" << endl;
		cin >> user_input;

	}
	return user_input;
}


//Функция очистки консоли

void doesClearConcol(){
	system("cls");
}

//Функция смены цвета текста
void doesTextColor() {
	cout << "Меняем цвет текста!" << endl;
	cout << "Выберите цвет текста:\n 1 — черный \n 2 — синий \n 3 — зеленый \n 4 — голубой \n 5 — красный \n 6 — лиловый \n 7 — желтый \n 8 — белый \n 9 — серый \n 10 — свело-синий \n 11 — светло-зеленый \n 12 — светло-голубой \n 13 — светло-красный \n 14 — светло-желтый \n 15 — ярко-белый" << endl;
	short user_input;
	cin >> user_input;
	switch (user_input)
	{
	case 1: {
		system("color 00");
		break;
	}
	case 2: {
		system("color 01");
		break;
	}
	case 3: {
		system("color 02");
		break;
	}
	case 4: {
		system("color 03");
		break;
	}
	case 5: {
		system("color 04");
		break;
	}
	case 6: {
		system("color 05");
		break;
	}
	case 7: {
		system("color 60");
		break;
	}
	case 8: {
		system("color 07");
		break;
	}
	case 9: {
		system("color 08");
		break;
	}
	case 10: {
		system("color 09");
		break;
	}
	case 11: {
		system("color 0A");
		break;
	}
	case 12: {
		system("color 0B");
		break;
	}
	case 13: {
		system("color 0C");
		break;
	}
	case 14: {
		system("color 0E");
		break;
	}
	case 15: {
		system("color 0F");
		break;
	}
	default: {
		break;
	}
	}
}

//Функция смены цвета фона
void doesConsolColor() {
	cout << "Меняем цвет консоли!" << endl;
	cout << "Выберите цвет консоли:\n 1 — черный \n 2 — синий \n 3 — зеленый \n 4 — голубой \n 5 — красный \n 6 — лиловый \n 7 — желтый \n 8 — белый \n 9 — серый \n 10 — свело-синий \n 11 — светло-зеленый \n 12 — светло-голубой \n 13 — светло-красный \n 14 — светло-желтый \n 15 — ярко-белый" << endl;
	short user_input;
	cin >> user_input;
	switch (user_input)
	{
	case 1: {
		system("color 00");
		break;
	}
	case 2: {
		system("color 10");
		break;
	}
	case 3: {
		system("color 20");
		break;
	}
	case 4: {
		system("color 30");
		break;
	}
	case 5: {
		system("color 40");
		break;
	}
	case 6: {
		system("color 50");
		break;
	}
	case 7: {
		system("color 60");
		break;
	}
	case 8: {
		system("color 70");
		break;
	}
	case 9: {
		system("color 80");
		break;
	}
	case 10: {
		system("color 90");
		break;
	}
	case 11: {
		system("color A0");
		break;
	}
	case 12: {
		system("color B0");
		break;
	}
	case 13: {
		system("color C0");
		break;
	}
	case 14: {
		system("color E0");
		break;
	}
	case 15: {
		system("color F0");
		break;
	}
	default: {
		break;
	}
	}
}


//Функция определяющая размер переменной типа данных int
void getSizeINT() {
	int i;
	cout << "Размер int: " << sizeof(i) << " байт" << endl;


}

// Функция определяющая размер переменной типа данных char
void getSizeCHAR() {
	char i = 'a';

	cout << "Размер char: " << sizeof(i) << " байт" <<endl;


}

// Функция определяющая размер переменной типа данных double
void getSizeDOUBLE() {
	double i;
	cout << "Размер double: " << sizeof(i) << " байт" << endl;
}

// Функция определяющая размер переменной типа данных FLOAT
void getSizeFLOAT() {
	float i;
	cout << "Размер float: " << sizeof(i) << " байт" << endl;
}

// Функция определяющая размер переменной типа данных  BOOL
void getSizeBOOL() {
	bool i;
	cout << "Размер float: " << sizeof(i) << " байт" << endl;
}

//Функциия выводящая "Привет я функция"
void ShowMessageHello() {
	cout << "“Привет я функция”" << endl;
}

//Функция выводящая квадрат 5х5
void MakesSquare() {
	cout << "Квадрат!\n";
	
	cout << "Введите текстуру квадрата: ";
	char texture;
	cin >> texture;
	for (short i = 0; i < 5; i++)
	{
		for (short k = 0; k < 5; k++)
		{
			cout <<" "<< texture;
		}
		cout << "\n";
	}
	
	
}