#include <iostream>
#include <string>

class Book
{
public:
    std::string title;
    std::string author;
    int         year;

    void display() { std::cout << "Название: " << title << ", Автор: " << author << ", Год: " << year << std::endl; }
};

int main()
{
    Book book1;
    book1.title  = "1984";
    book1.author = "George Orwell";
    book1.year   = 1949;
    book1.display();

    return 0;
}