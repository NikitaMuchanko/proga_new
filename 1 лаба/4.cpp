#include <iostream>

int main(void)
{
    int c;

    std::cout << "Введите температуру в цельсий" << std::endl;
    std::cin >> c;

    std::cout << "Температура в Фаренгейтах: " << (c * 9 / 5) + 32 << std::endl;
}