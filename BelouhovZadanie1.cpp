

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Введите два значения для которых надо найти среднее арифмитическое" << endl;
    int midznachdel = 2;
    int first, second;
    cin >> first;
    cin >> second;
    double midznach = (first + second) / 2;
    cout << "Среднее арифметическое " << first << " и " << second << ": " << midznach << endl;
}

