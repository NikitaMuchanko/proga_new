#include <iostream>

namespace A
{
int x = 10;
}
namespace B
{
int x = 20;
}

int main()
{
    std::cout << A::x << std::endl; // Уточнение пространства имен
    std::cout << B::x << std::endl;
    return 0;
}