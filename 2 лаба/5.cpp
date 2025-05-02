#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Введите число: ";
    cin >> num;

    if (num == 0)
    {
        cout << "0";
        return 0;
    }

    string binary = "";
    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num    = num / 2;
    }

    cout << "Двоичное: " << binary;
    return 0;
}