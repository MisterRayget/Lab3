#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num;
    double num1;
    cout << "Выберете меру измерения" << endl << endl;
    cout << "[1] Сажений в метры" << endl;
    cout << "[2] Из дюймов в сантиметры" << endl;
    cout << "[3] Футы в метры" << endl;
    cout << "[4] Драхм в граммы" << endl;
    cout << "[5] Унций в граммы" << endl;
    cout << "[6] Фунты в килограммы" << endl;
    cout << "[7] Аршинов в метры" << endl;
    cout << "[8] Золотников в граммы" << endl;
    cout << "[9] Дюймы в миллиметры" << endl;
    cin >> num;
    system("cls");
    switch (num){
    case 1:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 2.1366;
        break;

    case 2:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 2.5;
        break;

    case 3:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 0.3048;
        break;

    case 4:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 3.7325;
        break;

    case 5:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 29.86;
        break;

    case 6:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 0.40951;
        break;

    case 7:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 0.7112;
        break;

    case 8:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 4.2657;
        break;

    case 9:
        cout << "Введите значение:" << endl;
        cin >> num1;
        cout << num1 * 25.3995;
        break;
    }

    return 0;
}