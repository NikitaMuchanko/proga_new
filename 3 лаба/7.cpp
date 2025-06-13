#include <iostream>
#include <new> // Для bad_alloc

int main()
{
    try
    {
        int* hugeArray = new int[1LL << 40]; // Попытка выделить 10^12 элементов
        delete[] hugeArray;
    }
    catch (const std::bad_alloc& e)
    {
        std::cerr << "Out of memory!" << std::endl;
    }

    return 0;
}