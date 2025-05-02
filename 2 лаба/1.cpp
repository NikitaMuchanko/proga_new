#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Введите число: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Ошибка! Отрицательное число";
        return 0;
    }

    long long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }

    cout << "Факториал: " << result << endl;
    return 0;
}