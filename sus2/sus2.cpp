#include <iostream>

using namespace std;

int main()
{
    float a, b, c, x;
    int num;
    setlocale(LC_ALL, "RUS");
    cout << "Введите a и b через пробел: ";
    cin >> a >> b;
    cout << "\n1. Сложение.\n" << "2. Отрицание.\n" << "3. Умножение.\n" << "4. Деление.\n";
    cout << "Введите номер нужного решения: ";
    cin >> num;
    switch (num) {
        case 1:
            c = a + b;
            cout << "c = " << c;
            break;
        case 2:
            c = a - b;
            cout << "c = " << c;
            break;
        case 3:
            c = a * b;
            cout << "c = " << c;
            break;
        case 4:
            c = a / b;
            cout << "c = " << c;
            break;
        default:
            cout << "Ошибка.";
            return 0;
    }
    return 0;
}