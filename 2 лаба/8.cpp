#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int    count = 0;

    cout << "Введите текст: ";
    cin.ignore();
    getline(cin, text);

    for (char c : text)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||
            c == 'U')
        {
            count++;
        }
    }

    cout << "Гласных букв: " << count;
    return 0;
}