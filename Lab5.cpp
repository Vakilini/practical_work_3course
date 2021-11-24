#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short translate;
	short word;
	cout << "[+]Переводчик!\n[1]C русского на английский.\n[2]С английского на русский.\n[+]Выйти. ";
	cin >> translate;

	switch (translate)
	{
	case 1:
		cout << "[+]Выбран режим перевода с русского языка\n[1]Дорога\n[2]Кот\n[3]Собака\n[4]Дерево\n[5]Солнце" << endl;
		cout << "[6]Трава\n[7]Компьютер\n[8]Стол\n[9]Стул\n[10]Еда" << endl;
		cout << "[11]Конфета\n[12]Майнкрафт\n[13]Наука\n[14]Стена\n[15]Провод" << endl;
		cout << "Введите номер слова который хотите перевести: ";

		cin >> word;
		switch (word) {
		case 1:
			cout << "Дорога - Road";
			break;
		case 2:
			cout << "Кот - Cat";
			break;
		case 3:
			cout << "Собака - dog";
			break;
		case 4:
			cout << "Дерево - tree";
			break;
		case 5:
			cout << "Солнце - Sun";
			break;
		case 6:
			cout << "Трава - green";
			break;
		case 7:
			cout << "Компьютер - Computer";
			break;
		case 8:
			cout << "Стол - Table";
			break;
		case 9:
			cout << "Стул - Chair";
			break;
		case 10:
			cout << "Еда - Food";
			break;
		case 11:
			cout << "Конфета - Candy";
			break;
		case 12:
			cout << "Майнкрафт - Minecraft";
			break;
		case 13:
			cout << "Наука - Science";
			break;
		case 14:
			cout << "Стена - Wall";
			break;
		case 16:
			cout << "Провод - Wire";
			break;
		default:
			cout << "Нет такого слова";
		}
		break;
	case 2:
		cout << "[+]Выбран режим перевода с английского языка\n[1]Road\n[2]Cat\n[3]Dog\n[4]Tree\n[5]Sun" << endl;
		cout << "[6]Green\n[7]Computer\n[8]Table\n[9]Chair\n[10]Food" << endl;
		cout << "[11]Candy\n[12]Minecraft\n[13]Science\n[14]Wall\n[15]Wire" << endl;
		cout << "Введите номер слова который хотите перевести: ";
		cin >> word;
		switch (word) {
		case 1:
			cout << "Road - Дорога ";
			break;
		case 2:
			cout << " Cat - Кот";
			break;
		case 3:
			cout << "dog - Собака ";
			break;
		case 4:
			cout << "tree - Дерево ";
			break;
		case 5:
			cout << "Sun - Солнце ";
			break;
		case 6:
			cout << "green - Трава";
			break;
		case 7:
			cout << "Computer - Компьютер";
			break;
		case 8:
			cout << "Table - Стол";
			break;
		case 9:
			cout << "Chair - Стул";
			break;
		case 10:
			cout << "Food - Еда";
			break;
		case 11:
			cout << "Candy - Конфета";
			break;
		case 12:
			cout << "Minecraft - Майнкрафт";
			break;
		case 13:
			cout << "Science - Наука";
			break;
		case 14:
			cout << "Wall - Стена";
			break;
		case 16:
			cout << "Wire - Провод";
			break;
		default:
			cout << "Нет такого слова";
		}
		break;
	default:
		cout << "[+] Выбор некорректен";
		break;
	}
	cout << "";
	return 0;
}