#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Программа массивов" << endl;
	cout << "int\n";
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {

		cout << arr1[i] << '\n';
	}
	cout << "short\n";
	short arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < 10; i++) {

		cout << arr2[i] << "\n";
	}
	cout << "long\n";
	long arr3[10] = { 21,22,23,24,25,26,27,28,29,30 };
	for (int i = 0; i < 10; i++) {

		cout << arr3[i] << "\n";
	}
	cout << "float\n";
	float arr4[10] = { 1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.1 };
	for (int i = 0; i < 10; i++) {

		cout << arr4[i] << "\n";
	}
	cout << "double\n";
	double arr5[10] = { 1,0,1,0,1,0,1,0,1,0 };
	for (int i = 0; i < 10; i++) {

		cout << arr5[i] << "\n";
	}
	cout << "char\n";
	char arr6[10] = { '1','2','3','4','5','6','7','8','9','a' };
	for (int i = 0; i < 10; i++) {

		cout << arr6[i] << "\n";
	}
	cout << "bool\n";
	bool arr7[10] = { 1,0,1,0,1,0,1,0,1,0 };
	for (int i = 0; i < 10; i++) {

		cout << arr7[i] << "\n";
	}
	cout << "string\n";
	string arr8[10] = { "11","12","13","14","15","16","17","18","19","20" };
	for (int i = 0; i < 10; i++) {

		cout << arr8[i] << "\n";
	}
	return 0;

}




