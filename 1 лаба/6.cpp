#include <iostream>

int main()
{
    double a, b;
    char   op;
    std::cout << "Введите два числа и операцию: ";
    std::cin >> a >> b >> op;

    switch (op)
    {
        case '+':
            std::cout << "Результат: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Результат: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Результат: " << a * b << std::endl;
            break;
        case '/':
            if (b == 0)
            {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
            else
            {
                std::cout << "Результат: " << a / b << std::endl;
            }
            break;
        default:
            std::cout << "Неверная операция!" << std::endl;
    }
    return 0;
}