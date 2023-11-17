
#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");
    int num0, num1, num2;
    num0 = 0;
    num1 = 1;
    while (num1 <= 34) {
        cout << num0 << endl;
        cout << num1 << endl;
        num2 = num0 + num1;
        cout << num2 << endl;
        num0 = num2 + num1;
        num1 = num2 + num0;
    }
    cout << num0 << endl;
    
    
}


