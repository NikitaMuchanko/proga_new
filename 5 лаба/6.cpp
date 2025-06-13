#include <iostream>

class Calculator
{
public:
    int add(int a, int b) { return a + b; }

    double add(double a, double b) { return a + b; }

    int add(int a, int b, int c) { return a + b + c; }
};

int main()
{
    Calculator calc;
    std::cout << "Сумма (2 + 3): " << calc.add(2, 3) << std::endl;
    std::cout << "Сумма (2.5 + 3.5): " << calc.add(2.5, 3.5) << std::endl;
    std::cout << "Сумма (2 + 3 + 4): " << calc.add(2, 3, 4) << std::endl;

    return 0;
}