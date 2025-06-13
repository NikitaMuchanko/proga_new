#include <iostream>

namespace VeryLongNamespaceName
{
void test()
{
    std::cout << "Test function called." << std::endl;
}
} // namespace VeryLongNamespaceName

namespace Short = VeryLongNamespaceName;

int main()
{
    Short::test(); // Должно работать
    return 0;
}