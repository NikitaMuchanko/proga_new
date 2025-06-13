#include <iostream>

int main()
{
    int* a   = new int(5);          // Одиночный int
    int* arr = new int[3]{1, 2, 3}; // Массив из 3 элементов

    delete a;     // OK
    delete[] arr; // Исправлено: использовать delete[] для массива

    return 0;
}