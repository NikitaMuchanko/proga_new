#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Сколько чисел вывести? ";
    cin >> n;

    int a = 0, b = 1;
    cout << "Ряд: ";

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a        = b;
        b        = next;
    }
    return 0;
}