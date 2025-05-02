#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Введите число: ";
    cin >> num;

    num = abs(num); // Для отрицательных чисел

    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    cout << "Сумма цифр: " << sum;
    return 0;
}