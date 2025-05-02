#include <iostream>

int main(void)
{
    int a;
    std::cout << "Введите число" << std::endl;
    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << "Число четное" << std::endl;
    }
    else
    {
        std::cout << "Число нечетное" << std::endl;
    }
}