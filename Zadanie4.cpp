
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    
    int sum = 0;
    for (int i = 1; i <= 150; ++i) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            
        }
        else {
            //что бы был
        }
    }
    cout <<"Сумма чисел которые делятся на 5 или 7 равна: " << sum;
}


