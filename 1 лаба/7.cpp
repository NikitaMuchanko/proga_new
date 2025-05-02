#include <iostream>

int main()
{
    double a, b, c;
    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;
    std::cout << "Среднее: " << (a + b + c) / 3 << std::endl;
    return 0;
}