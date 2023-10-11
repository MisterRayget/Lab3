#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    const int num1=10;
    long long num2 = 1;
    int num3 = 1;
    for (num3; num3 <= num1; num3++)
        num2 *= (num3 * (num3 + 1)) / 2;
    cout << "Ответ:" << num2;

    return 0;
}