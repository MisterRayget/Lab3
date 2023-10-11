#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    double num1;
    double num2;
    cout << "Введите сумму котрорую хочешь положить:";
    cin >> num1;
    cout << "Введите через сколько лет вы хотите забрать деньги:";
    cin >> num2;
    cout << "Сумма полученная за это время:" << num1+(num1 * (num2 * 0.03))<<"руб.";

    return 0;
}