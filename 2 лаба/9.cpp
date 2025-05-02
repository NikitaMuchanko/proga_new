#include <iostream>
using namespace std;

int main()
{
    int num, reversed = 0;
    cout << "Введите число: ";
    cin >> num;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num      = num / 10;
    }

    cout << "Перевернутое: " << reversed;
    return 0;
}