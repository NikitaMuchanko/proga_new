#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Не простое";
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Не простое";
            return 0;
        }
    }

    cout << "Простое";
    return 0;
}