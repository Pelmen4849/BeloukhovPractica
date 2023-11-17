
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите число:" << endl;
    int num0;
    cin >> num0;
    cout << "Делитель числа: " << num0 << ": ";
    for (int i = 1; i <= num0; i++) {
        if (num0 % i == 0) {
            cout << i << ", ";
        }

        else {
            //что бы был
        }
    }
    cout << endl;
}