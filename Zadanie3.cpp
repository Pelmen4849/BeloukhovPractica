
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << " Введите диапазон:" << endl;
	int diap;
	cin >> diap;
	cout << " " << endl;
	int number = -1;
	while ( number <= diap) {
		if (number % 2 == 0) {
			cout << number << endl;
			number++;
		}
		else {
			number++;
		}
	}
}


