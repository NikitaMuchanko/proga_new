#include <iostream>

namespace MathUtils
{
const double PI = 3.1415;
int          square(int x)
{
    return x * x;
}
} // namespace MathUtils

int main()
{
    std::cout << "Square: " << MathUtils::square(5) << std::endl;
    std::cout << "PI: " << MathUtils::PI << std::endl;
    return 0;
}