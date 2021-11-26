#include <iostream>
using namespace std;
//Глобальные переменные и массивы
short questions = 15;
short life = 3;
short prompt = 15;
short rand_number = 0;
short arr_rand_number[15]{};
short arr_rand_answer[4]{};
short answer_input = 0;
short sum_correct_answer = 0;
//Функции
void random_answer();
void random_question();
void deth();
void play();
void setting();
//Структура
struct Questions {
	string questions;
	string answer[4];
	string correct;
};

Questions quest[15]{
{"Кто победил на выборах в российское Учредительное собрание?", {"БУНД", "Большевики", "Кадеты", "Эсеры"}, "Эсеры"},
{"Колонией какой страны были Нидерланды до получения независимости?", {"Англии", "Испании", "Франции", "Германии"},"Испании"},
{"Назовите имя японского поэта, теоретика стиха, сыгравшего большую роль в становлении поэтического жанра хайку.", {"Акбар", "Го-Сай", "Мацуо Басё", "Мэйдзи"}, "Мацуо Басё"},
{"Дайте определение термину “'аболиционизм'", {"Насильственный захват земель", "Политика невмешательства", "Отрицание института власти и правительства", "Движение против рабства"} ,"Движение против рабства"},
{"Назовите участников первой 'опиумной' войны.", {"Франция и Великобритания", "Китай и Великобритания", "Япония и Россия", "Португалия и Испания"},"Китай и Великобритания"},
{"Какое название получила тактика ненасильственного сопротивления, разработанная Ганди в период освободительного движения в Индии?", {"Сатьяграха", "Ахимса", "Сансара", "Нирвана"},"Сатьяграха"},
{"Впервые химическое оружие было применено в битве…", {"Под Оршей", "Под Брестом", "Под Верденом", "Под Ипром"}, "Под Ипром"},
{"Когда Япония, Германия и Италия заключили 'Тройственный пакт'?", {"1 сентября 1939 года", "27 сентября 1940 года", "22 июня 1941 года", "11 августа 1942 года"}, "27 сентября 1940 года"},
{"Президент США, член 'большой тройки' во время Парижской мирной конференции. О ком идет речь?", {"Франклин Рузвельт", "Гарри Трумэн", "Вудро Вильсон", "Дуайт Эйзенхауэр"}, "Вудро Вильсон"},
{"19 век начался с дворцового переворота. В 1801 году в ночь на 12 марта был убит император Всероссийский. Кто именно?", {"Павел I", "Александр II", "Пётр III", "Александр I"},  "Павел I"},
{"Первая в мире железная дорога общественного пользования на паровой тяге открылась в 1825 году. В какой стране это произошло?", {"Германия", "Россия", "Великобритания", "Китай"}, "Россия"},
{"Первая эпидемия этой болезни в России пришлась на 1830 год. По официальным данным заболело около пятисот тысяч человек, двести тысяч из которых погибли. О какой болезни идёт речь?", {"Оспа", "Чума", "Холера", "Сифилис"},  "Холера"},
{"Во второй половине XIX века Российская империя продала Аляску за 7,2 миллиона долларов. В каком конкретно году это произошло?", {"В 1853 году", "В 1867 году", "В 1884 году", "В 1891 году"},  "В 1867 году"},
{"23 июня 1894 года состоялись первые современные Олимпийские игры. В каком городе их провели?", {"В Афинах", "В Олимпии", "В Риме", "В России"},  "В Афинах"},
{"В какой год началась русско-японская война?", {"1902 году", "1903 году", "1904 году", "1905 году"}, "1904 году"} };


int main()
{
	setlocale(0, "");
	srand(static_cast<unsigned int>(time(0)));
	random_question();
	bool m = true;
	while (m)
	{
		cout << "\t\t\t[+]Программа - Викторина\n" << endl;
		cout << "\t\t\t[1]Начать игру\n" << endl;
		cout << "\t\t\t[2]Настройки\n" << endl;
		cout << "\t\t\t[3]Правила\n" << endl;
		cout << "\t\t\t[4]Выйти\n" << endl;
		short menu;
		cin >> menu;
		switch (menu)
		{
		case 1:
			system("cls");
			play();
			break;
		case 2:
			system("cls");
			setting();
			break;
		case 3:
			system("cls");
			cout << "[+]Правила\n";
			cout << "Программа будет давать вам вопросы и 4 варианта ответов к ним. У вас есть возможность запросить подсказку к вопросу, но учтите, что их количество ограничено.\nОтвечая на вопросы вы получаете балы, при правильном выборе ответа или теряете одну жизнь, при неправильном ответе. Игра закончится когда вы потеряете все жизни\n\n\n\t\t\t\t\t\t\tЖЕЛАЮ УДАЧИ.\n\n\n" << endl;
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Неправильный ввод\n";
			break;
		}
	}
}


//Функция создания последовательности ответов
void random_answer() {
	for (short i = 0; i < 4; i++) {
		short f = rand() % 4;
		arr_rand_answer[i] = f;

	}
	for (int w = 0; w < 4; w++) {
		for (int q = 0; q < 4; q++) {
			for (int m = 0; m < 4; m++) {
				for (int y = m + 1; y < 4; y++) {
					int s = arr_rand_answer[m];
					if (s == arr_rand_answer[y]) {
						arr_rand_answer[m] = rand() % 4;
					}
				}
			}
		}
	}

}

//Функция последовательности вопросов 
void random_question() {
	for (short i = 0; i < questions; i++) {
		short flag = rand() % questions;
		arr_rand_number[i] = flag;

	}
	for (int w = 0; w < questions; w++) {
		for (int q = 0; q < questions; q++) {
			for (int m = 0; m < questions; m++) {
				for (int y = m + 1; y < questions; y++) {
					int s = arr_rand_number[m];
					if (s == arr_rand_number[y]) {
						arr_rand_number[m] = rand() % questions;
					}
				}
			}
		}
	}
}

//функция подсчёта жизней
void deth() {
	life--;
	if (life == 0)
	{
		cout << "Жизни закончились";
		exit(0);
	}
}

//Функция игры
void play() {
	string answer_cop[4]{};
	short flag;
	random_answer();
	for (int i = 0; i < questions; i++)
	{

		flag = arr_rand_number[i];

		cout << "[" << i + 1 << "]" << quest[flag].questions << '\n' << endl;
		for (int jh = 0; jh < 4; jh++)
		{
			cout << "[" << jh + 1 << "]" << quest[flag].answer[arr_rand_answer[jh]] << endl;
			answer_cop[jh] = quest[flag].answer[arr_rand_answer[jh]];
		}
		cout << "Если вопрос оказался для вас сложным, то вы можете взять подсказку, введя '5'\n";
		cin >> answer_input;

		while (answer_input < 1 || answer_input > 5) {
			cout << "Некоректный ввод. Повторите ввод коректно\n";
			cin >> answer_input;
		}
		//Подсказака
		if (answer_input == 5) {
			if (prompt) {
				system("cls");
				cout << "[" << i + 1 << "]" << quest[flag].questions << '\n' << endl;
				for (short search = 0; search < 4; search++) {
					short cop_search;
					if (answer_cop[search] == quest[flag].correct) {
						cop_search = search;
						cout << "|\x1b[31m" << '[' << search + 1 << ']' << answer_cop[search] << "\x1b[0m " << endl;
						bool input = 1;
						short in = 0;
						while (input)
						{
							if (in == search) {
								in = rand() % 4;
							}
							else {
								input = 0;
							}
						}
						cout << "|\x1b[31m" << '[' << in + 1 << ']' << answer_cop[in] << "\x1b[0m " << endl;
					}

				}
				prompt--;
			}
			else if (prompt == 0) {
				cout << "У вас кончились подсказки\n";
			}
		}
		
		while (answer_input < 1 || answer_input > 4) {
			cout << "Некоректный ввод. Повторите ввод коректно\n";
			cin >> answer_input;
		}
		if (answer_cop[answer_input - 1] == quest[flag].correct)
		{
			sum_correct_answer++;
			cout << "\n+1 балл\n";
		}
		else
		{
			deth();
			cout << "\n-1 жизнь\n";
		}
		//system("cls");
	}
}

//Функция с настройками игры
void setting() {
	bool menu1 = false;
	bool menu2 = true;
	bool menu3 = true;
	bool menu4 = true;
	while (menu1 == false)
	{
		cout << "\t\t\t[+]Настройки\n" << endl;
		cout << "\t\t\t[1]Колличество вопросов\n" << endl;
		cout << "\t\t\t[2]Колличество подсказок\n" << endl;
		cout << "\t\t\t[3]Колличество жизней\n" << endl;
		cout << "\t\t\t[4]Выход\n" << endl;
		short menu = 0;
		cin >> menu;
		switch (menu)
		{
		case 1:
			while (menu3 == true)
			{
				cout << "[+]Введите колличество вопросов\n [1]5\n [2]10\n [3]15\n";
				cin >> questions;
				switch (questions)
				{
				case 1:
					questions = 5;
					menu3 = false;
					break;
				case 2:
					questions = 10;
					menu3 = false;
					break;
				case 3:
					questions = 15;
					menu3 = false;
					break;
				default:
					cout << "Неправильный ввод\n";
					break;
				}
			}
			system("cls");
			break;
		case 2:
			while (menu4 == true)
			{
				cout << "[+]Введите колличество подсказок\n [1]5\n [2]10\n [3]15\n";
				cin >> prompt;
				switch (prompt)
				{
				case 1:
					prompt = 5;
					menu4 = false;
					break;
				case 2:
					prompt = 10;
					menu4 = false;
					break;
				case 3:
					prompt = 15;
					menu4 = false;
					break;
				default:
					cout << "Неправильный ввод\n";
					break;
				}
			}
			system("cls");
			break;
		case 3:
			while (menu2 == true)
			{
				cout << "[+]Введите колличество жизней\n [1]1\n [2]2\n [3]3\n";
				cin >> life;
				switch (life)
				{
				case 1:
					life = 1;
					menu2 = false;
					break;
				case 2:
					life = 2;
					menu2 = false;
					break;
				case 3:
					life = 3;
					menu2 = false;
					break;
				default:
					cout << "Неправильный ввод\n";
					break;
				}
			}
			system("cls");
			break;
		case 4:
			system("cls");
			menu1 = true;
			break;
		default:
			cout << "Неправильный ввод\n";
			break;
		}
	}
}

