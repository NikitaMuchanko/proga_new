#include <iostream>

int main()
{
    int age;
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "Вы совершеннолетний" << std::endl;
    }
    else
    {
        std::cout << "Вы несовершеннолетний" << std::endl;
    }
    return 0;
}