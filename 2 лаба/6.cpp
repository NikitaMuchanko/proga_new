#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите три числа через пробел: ";
    cin >> a >> b >> c;

    int min_num = a;
    if (b < min_num)
        min_num = b;
    if (c < min_num)
        min_num = c;

    int max_num = a;
    if (b > max_num)
        max_num = b;
    if (c > max_num)
        max_num = c;

    cout << "Минимум: " << min_num << endl;
    cout << "Максимум: " << max_num;
    return 0;
}