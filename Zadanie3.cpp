
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int sum = 0;
	cout << "Введите начало диапазона:" << endl;
	int nachdiap;
	cin >> nachdiap;
	cout << "Введите окончание диапазона:" << endl;
	int enddiap;
	cin >> enddiap;
	cout << " " << endl;
	for (int i = nachdiap; i <= enddiap; i++) {
		if (i % 2 == 0) {
			
			sum += i;
		}
		
	}
	cout <<"Сумма всех четных чисел в заданном диапозоне равна " << sum << endl;
}


