
#include <cmath>
#include <iostream>
using namespace std;

//Объявление функций
void instuct();
char ask_yes_no();
void pieces();
void new_board();
void display_board();
void winner();
void Human_move(char XorO, string plaeer);
bool PC_move();
bool LMove(short move);
void next_turn(bool pleer2);
void menu();
void seting();
void game();
//Объявление общедоступных переменных и массивов
short num_squares = 9;
char X = 'X';
char O = '0';
char player1 = X;
char player2 = O;
char FIELD = 4;
char board[25];
//В одном массиве все ходы и они присваюватся соответствующие размеру поля в другой массив
int BEST_MOVES[50] = { 4,0,2,6,8,1,3,5,7,  5,6, 8, 3, 12, 2, 9, 13, 10, 14, 11, 0, 1, 4, 7, 15,   12,11, 13, 15, 8, 17, 10, 7, 9, 6, 18, 2, 19, 23, 24, 0, 1, 3, 4, 5, 14, 16, 20, 21, 22 };
short WAYS_TO_WIN[112][3] = { {0, 1, 2 },  {3, 4, 5 }, { 6, 7, 8 } ,  {0, 3, 6 },  {1, 4, 7 }, {2, 5, 8 },  {0, 4, 8 },  {2, 4, 6 }   ,   {0,1,2},{4,5,6},{8,9,10},{0,4,8},{1,5,9},{2,6,10},{0,5,10},{2,5,8},{1,2,3},{5,6,7},{9,10,11},{1,5,9},{2,6,10},{3,7,11},{1,6,11},{3,6,9},{4,5,6},{8,9,10},{12,13,14},{4,8,12},{5,9,13},{6,10,14},{4,9,14},{6,9,12},{5,6,7},{9,10,11},{13,14,15},{5,9,13},{6,10,14},{7,11,15},{5,10,15},{7,10,13} ,    {0,1,2},{5,6,7},{10,11,12},{0,5,10},{1,6,11},{2,7,12},{0,6,12},{2,10,6},{1,2,3},{6,7,8},{11,12,13},{1,6,11},{2,7,12},{3,8,13},{1,7,13},{3,7,11},{2,3,4},{7,8,9},{12,13,14},{2,7,12},{3,8,13},{4,9,14},{2,8,14},{4,8,12},{5,6,7},{10,11,12},{15,16,17},{5,15,10},{16,6,11},{7,12,17},{5,11,17},{7,11,15},{6,7,8},{11,12,13},{16,17,18},{6,11,16},{7,12,17},{8,13,18},{6,12,18},{8,12,16},{7,8,9},{12,13,14},{17,18,19},{7,12,17},{8,13,18},{9,14,19},{7,13,19},{9,13,17},{10,11,12},{15,16,17},{20,21,22},{10,15,20},{11,16,21},{12,17,22},{10,16,22},{12,16,20},{11,12,13},{16,17,18},{21,22,23},{11,16,21},{12,17,22},{13,18,23},{11,17,23},{13,17,21} ,{12,13,14},{17,18,19},{22,23,24},{12,17,18},{13,18,23},{14,19,24},{12,18,24},{14,18,22} };
char turn = X;
short colorX = 37;
short colorO = 37;
short flag_best_moves[2] = { 0,9 };
short flag_pc_move1 = 0;
short flag_pc_move2 =  9;
bool pleer2 = 0;
short instr = 1;
int main()
{
	setlocale(0, "");
	menu();




	return 0;
}
//Функция инструкции
void instuct() {
	if (player1 == X) {
		cout << "Игрок1 играет за " << "|\x1b[" << colorX << "m" << " " << player1 << "\x1b[0m " << endl;
		cout << "Игрок2 играет за " << "|\x1b[" << colorO << "m" << " " << player2 << "\x1b[0m " << endl;
	}
	else {
		cout << "Игрок1 играет за " << "\x1b[" << colorO << "m" << " " << player1 << "\x1b[0m " << endl;
		cout << "Игрок2 играет за " << "\x1b[" << colorX << "m" << " " << player2 << "\x1b[0m " << endl;
	}
	switch (instr)
	{
	case 1: {
		cout << "| 0 | 1 | 2 |\n-------------\n| 3 | 4 | 5 | \n------------ - \n| 6 | 7 | 8 | " << endl;
		break;
	}
	case 2: {
		cout << "| 0 | 1 | 2 | 3 |\n------------------\n| 4 | 5 | 6 | 7 |\n------------------\n| 8 | 9 | 10| 11|\n------------------\n| 12| 13| 14| 15|" << endl;
		break;
	}
	case 3: {
		cout << "| 0 | 1 | 2 | 3 | 4 |\n---------------------\n| 5 | 6 | 7 | 8 | 9 |\n---------------------\n| 10| 11| 12| 13| 14|\n---------------------\n| 15| 16| 17| 18| 19|\n---------------------\n| 20| 21| 22| 23| 24|" << endl;
		break;
	}
	default:
		break;
	}
}
//Функция вопроса к пользователю
char ask_yes_no() {
	char answer = ' ';
	while ((answer != 'y') && (answer != 'n')) {
		cout << "Первый ход за Игроком1?(y/n)\n";
		cin >> answer;
	}
	return answer;
}
//Функция распределения Х и 0 между игроком и пк
void pieces() {
	char go_first = ask_yes_no();
	if (go_first == 'y') {
		player1 = X;
		player2 = O;
	}
	else if (go_first == 'n') {
		player1 = O;
		player2 = X;
	}
}
//Функция создания поля
void new_board() {
	for (short square = 0; square < num_squares; square++) {
		board[square] = FIELD;
	}
}
//Функция отображения поля
void display_board() {
	short flagDeLimeter = short(sqrt(num_squares));
	for (short view_board = 0; view_board < num_squares; view_board++) {
		if (board[view_board] == 'X') {
			cout << "|\x1b[" << colorX << "m" << " " << "X" << "\x1b[0m ";
		}
		else if (board[view_board] == '0') {
			cout << "|\x1b[" << colorO << "m" << "  " << '0' << "\x1b[0m ";
		}
		else
		{
			cout << "| " << board[view_board] << ' ';
		}
		if ((view_board + 1) % flagDeLimeter == 0) {
			cout << '\n';
			switch (instr)
			{
			case 1: {
				cout << "-------------\n";
				break;
			}
			case 2: {
				cout << "------------------\n";
				break;
			}
			case 3: {
				cout << "---------------------\n";
				break;
			}
			default:
				break;
			}
			
		}
	}
}
//Функция определения итогов матча
void winner() {
	for (short flag = flag_best_moves[0]; flag < flag_best_moves[1]; flag++) {
		if (board[WAYS_TO_WIN[flag][0]] == player2 && board[WAYS_TO_WIN[flag][1]] == player2 && board[WAYS_TO_WIN[flag][2]] == player2) {
			cout << "Три " << player2 << " в ряд!\n" << "Победил Игрок2!!!" << endl;
			exit(0);
		}
		else if (board[WAYS_TO_WIN[flag][0]] == player1 && board[WAYS_TO_WIN[flag][1]] == player1 && board[WAYS_TO_WIN[flag][2]] == player1) {
			cout << "Три " << player1 << " в ряд!\n" << "Победил Игрок1!!!" << endl;
			exit(0);
		}
	}
	short completion = 0;
	for (short flag = 0; flag < num_squares; flag++) {
		if (board[flag] != FIELD) {
			completion++;
		}
	}
	if (completion == num_squares) {
		cout << "Ничья!" << endl;
		exit(0);
	}
}
//Функция проверки доступности хода
bool LMove(short move) {
	if (board[move] == FIELD) {
		return 1;
	}
	else {
		cout << "Эта клетка занята. Введите другую:\n";
		return 0;
	}
}
//Функция человеческого хода
void Human_move(char XorO, string plaeer) {
	bool c = 0;
	short player_move;
	cout << "Ход " <<plaeer<< " :"  << endl;
	while (c == 0)
	{
		cin >> player_move;
		while (player_move < 0 || player_move > num_squares) {
			cout << "Ваш ввод некоректен. Повторите ввод:\n " << endl;
			cin >> player_move;
		}
		c = LMove(player_move);
	}
	board[player_move] = XorO;
}
//Функция хода компьютера
bool PC_move() {
	bool smart_move = 0;
	char chek_board[25] = {};
	//Проверка доступности победного хода у пк
	for (short flag0 = 0; flag0 < num_squares; flag0++) {
		chek_board[flag0] = board[flag0];
	}
	for (short check_move = 0; check_move < num_squares; check_move++) {
		if (chek_board[check_move] == FIELD) {
			chek_board[check_move] = player2;
			for (short flag = flag_best_moves[0]; flag < flag_best_moves[1]; flag++) {
				if (chek_board[WAYS_TO_WIN[flag][0]] == player2 && chek_board[WAYS_TO_WIN[flag][1]] == player2 && chek_board[WAYS_TO_WIN[flag][2]] == player2) {
					if (board[WAYS_TO_WIN[flag][0]] == FIELD) {
						board[WAYS_TO_WIN[flag][0]] = player2;
						smart_move = 1;
						return 0;
					}
					else if (board[WAYS_TO_WIN[flag][1]] == FIELD) {
						board[WAYS_TO_WIN[flag][1]] = player2;
						smart_move = 1;
						return 0;
					}
					else if (board[WAYS_TO_WIN[flag][2]] == FIELD) {
						board[WAYS_TO_WIN[flag][2]] = player2;
						smart_move = 1;
						return 0;
					}
				}
			}
			chek_board[check_move] = FIELD;
		}
	}
	//Проверка доступности победного хода у игрока
	for (short flag0 = 0; flag0 < num_squares; flag0++) {
		chek_board[flag0] = board[flag0];
	}
	for (short check_move = 0; check_move < num_squares; check_move++) {
		if (chek_board[check_move] == FIELD) {
			chek_board[check_move] = player1;
			for (short flag = flag_best_moves[0]; flag < flag_best_moves[1]; flag++) {
				if (chek_board[WAYS_TO_WIN[flag][0]] == player1 && chek_board[WAYS_TO_WIN[flag][1]] == player1 && chek_board[WAYS_TO_WIN[flag][2]] == player1) {
					if (board[WAYS_TO_WIN[flag][0]] == FIELD) {
						board[WAYS_TO_WIN[flag][0]] = player2;
						smart_move = 1;
						return 0;
					}
					else if (board[WAYS_TO_WIN[flag][1]] == FIELD) {
						board[WAYS_TO_WIN[flag][1]] = player2;
						smart_move = 1;
						return 0;
					}
					else if (board[WAYS_TO_WIN[flag][2]] == FIELD) {
						board[WAYS_TO_WIN[flag][2]] = player2;
						smart_move = 1;
						return 0;
					}
				}
			}
			chek_board[check_move] = FIELD;
		}
	}
	//Дефолтная последовательность ходов
	if (smart_move == 0) {
		for (short flag = flag_pc_move1; flag < flag_pc_move2; flag++) {
			if (board[BEST_MOVES[flag]] == FIELD) {
				board[BEST_MOVES[flag]] = player2;
				break;
			}
		}
	}
}
//Функция смена хода
void next_turn(bool pleer2) {
	if (turn == player1) {
		Human_move(player1, "Игрока 1");
		turn = player2;
	}
	else {
		if (pleer2 == 0) {
			PC_move();
		}
		else {
			Human_move(player2, "Игрока 2");
		}
		turn = player1;
	}
}
//Фунуция самой игры
void game() {
	new_board();
	bool win = 0;
	while (win == 0) {
		instuct();
		next_turn(pleer2);
		cout << "\n\n\n" << endl;		
		system("cls");
		display_board();
		cout << "\n\n" << endl;
		winner();
	}
}
//Функция главного меню
void menu() {
	cout << "\t\t\t1) Начать игру\n";
	cout << "\t\t\t2) Настройки\n";
	cout << "\t\t\t3)Выйти\n";
	short answer;
	cin >> answer;
	while (answer < 1 || answer > 3) {
		cout << "Нет такого пункта. Выбирайте коректно:\n";
		cin >> answer;
		system("cls");
	}
	if (answer == 1) {
		system("cls");
		game();
	}
	else if (answer == 2) {
		system("cls");
		seting();
	}
	else {
		cout << "Ты не проиграешь если не будешь играть...";
		exit(0);
	}
}
//функции настройки игры
void seting() {
	short seting_check = 0;
	short size_map = 0;
	cout << " \t\t1) Размер поля(по дефолту 3х3);" << endl;
	cout << " \t\t2) Цвет крестика(по дефолту белый);" << endl;
	cout << " \t\t3) Цвет нолика(по дефолту белый);" << endl;
	cout << " \t\t4) Выбор второго игрока(по дефолту ПК);" << endl;
	cout << " \t\t5) Выбор игрока который первый ходит(по дефолту Игрок_1);" << endl;
	cout << " \t\t6) Выйти в главное меню;" << endl;
	while (seting_check != 6) {
		cin >> seting_check;
		switch (seting_check)
		{
		case 1: {
			cout << " \t\t\t1) Выбор поля 3х3;" << endl;
			cout << " \t\t\t2) Выбор поля 4x4;" << endl;
			cout << " \t\t\t3) Выбор поля 5x5;" << endl;
			cin >> size_map;
			while (size_map < 1 || size_map > 3) {
				cout << "Нет такого пункта. Введите номер пункта(1-3)" << endl;
				cin >> size_map;
				system("cls");
			}
			switch (size_map)
			{
			case 1: {
				num_squares = 9;
				flag_best_moves[0] = 0;
				flag_best_moves[1] = 9;
				instr = 1;
				flag_pc_move1 = 0;
				flag_pc_move2 = 9;
				break;
			}
			case 2: {
				num_squares = 16;
				flag_best_moves[0] = 9;
				flag_best_moves[1] = 40;
				instr = 2;
				flag_pc_move1 = 9;
				flag_pc_move2 = 25;
				break;
			}
			case 3: {
				num_squares = 25;
				flag_best_moves[0] = 40;
				flag_best_moves[1] = 112;
				instr = 3;
				flag_pc_move1 = 25;
				flag_pc_move2 = 50;
				break;
			}
			default: {
				cout << "Нет такого размера. ";
				break;
			}				  
			}
			system("cls");
			seting();
		}
		case 2: {
			cout << "Меняем цвет крестика" << endl;
			cout << "Выберите номер цвета крестика: 1-чёрный\n2-красный\n3-зелёный\n4-жёлтый\n5-синий\n6-фиолетовый\n7-бирюзовый\n8-белый" << endl;
			cin >> colorX;
			while (colorX < 1 || colorX > 8) {
				cout << "Нет такого пункта. Введите номер пункта(1-8)" << endl;
				cin >> colorX;
				system("cls");
			}
			colorX = colorX + 29;
			system("cls");
			seting();
		}
		case 3: {
			cout << "Меняем цвет нолика" << endl;
			cout << "Выберите номер цвета крестика: 1-чёрный\n2-красный\n3-зелёный\n4-жёлтый\n5-синий\n6-фиолетовый\n7-бирюзовый\n8-белый" << endl;
			cin >> colorO;
			while (colorO < 1 || colorO > 8) {
				cout << "Нет такого пункта. Введите номер пункта(1-8)" << endl;
				cin >> colorO;
				system("cls");
			}
			colorO = colorO + 29;
			system("cls");
			seting();
		}
		case 4: {
			cout << "0 - Вы ираете против ПК; \n1 - Вы играете человек против человека\n ";
			short pleer2_2;
			cin >> pleer2_2;
			while (pleer2_2 < 0 || pleer2_2 > 1) {
				cout << "Нет такого пункта. Введите номер пункта(0-1)" << endl;
				cin >> pleer2_2;
				system("cls");
			}
			pleer2 = pleer2_2;
			system("cls");
			seting();
		}
		case 5: {
			pieces();
			system("cls");
			seting();
		}
		case 6: {
			system("cls");
			menu();
			break;
		}
		default: {
			cout << "Нет такой настройки\n";
			system("cls");
			seting();
		}
		}
		}
	}