#include <iostream>

int main(void)
{
    int a, b;
    std::cout << "Введите длинну" << std::endl;
    std::cin >> a;

    std::cout << "Введите ширину" << std::endl;
    std::cin >> b;
    std::cout << "" << std::endl;

    std::cout << "Площадь прямоугольника" << std::endl;
    std::cout << a * b;
    return 0;
}