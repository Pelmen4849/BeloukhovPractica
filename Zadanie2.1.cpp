

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int first, second, res;
	cout << "Введите два числа которые надо умножить друг на друга: " << endl;
	cin >> first;
	cin >> second;
	cout << " " << endl;
	cout << "Введите ваш результат умножения: ";
	cin >> res;
	if (res == first * second) {
		cout << " " << endl;
		cout << "Правильно" << endl;
	}
	else {
		cout << " " << endl;
		cout << "Неверно" << endl;
		cout << "Правильный вариант: " << endl;
		cout << first * second;
	}
}


