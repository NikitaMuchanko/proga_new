#include <iostream>

class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction(int n, int d) : numerator(n), denominator(d) {}

    Fraction operator+(const Fraction& other)
    {
        int newNum = numerator * other.denominator + other.numerator * denominator;
        int newDen = denominator * other.denominator;
        return Fraction(newNum, newDen);
    }

    void display() { std::cout << numerator << "/" << denominator << std::endl; }
};

int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction result = f1 + f2;
    result.display();

    return 0;
}