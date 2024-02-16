#include <iostream>

int main()
{
    float a, b, c;
    int num;
    setlocale(LC_ALL, "RUS");
    std::cout << "Введите a и b через пробел: ";
    std::cin >> a >> b;
    std::cout << "\n1. Сложение.\n" << "2. Отрицание.\n" << "3. Умножение.\n" << "4. Деление.\n";
    std::cout << "Введите номер нужного решения: ";
    std::cin >> num;
    switch (num) {
        case 1:
            c = a + b;
            std::cout << "c = " << c;
            break;
        case 2:
            c = a - b;
            std::cout << "c = " << c;
            break;
        case 3:
            c = a * b;
            std::cout << "c = " << c;
            break;
        case 4:
            c = a / b;
            std::cout << "c = " << c;
            break;
        default:
            std::cout << "Ошибка.";
            return 0;
    }
    return 0;
}