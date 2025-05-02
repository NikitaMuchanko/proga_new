#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char   op;

    while (true)
    {
        cout << "\nВведите оператор (+, -, *, /) или 'выход': ";
        string input;
        cin >> input;

        if (input == "выход")
            break;

        op = input[0];
        cout << "Введите два числа: ";
        cin >> num1 >> num2;

        if (op == '+')
            cout << "Результат: " << num1 + num2;
        else if (op == '-')
            cout << "Результат: " << num1 - num2;
        else if (op == '*')
            cout << "Результат: " << num1 * num2;
        else if (op == '/')
        {
            if (num2 != 0)
                cout << "Результат: " << num1 / num2;
            else
                cout << "Ошибка деления!";
        }
        else
            cout << "Неизвестная операция!";
    }
    return 0;
}