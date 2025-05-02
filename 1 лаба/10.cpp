#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    std::cout << "Угадайте число от 1 до 100: ";
    while (true)
    {
        std::cin >> guess;
        if (guess == secret)
        {
            std::cout << "Правильно!" << std::endl;
            break;
        }
        else if (guess < secret)
        {
            std::cout << "Больше!" << std::endl;
        }
        else
        {
            std::cout << "Меньше!" << std::endl;
        }
    }
    return 0;
}