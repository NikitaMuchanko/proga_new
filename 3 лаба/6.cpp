#include <iostream>

int main()
{
    int* arr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = i + 1;
    }

    std::cout << "Array: ";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}