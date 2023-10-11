#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Введите число:" << endl;
    do {
        cout << "Число:"<< "=";
        cin >> num3;
        if(num3){
            num1++;
            num2 += num3;
        }
    } while (num3);
    cout << "Количество введенных чисел:" << num1 + 1 << endl;
    cout << "Общая сумма:" << num2 << endl;
    cout << "Средне арефметическое значение:" << num2 / (num1 + 1) << endl;

    return 0;
}