#include <iostream>
#include <string>

class Book
{
public:
    std::string title;
    std::string author;
    int         year;

    Book() : title(""), author(""), year(0) {}

    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

    void display() { std::cout << "Название: " << title << ", Автор: " << author << ", Год: " << year << std::endl; }
};

int main()
{
    Book book1;
    book1.display();

    Book book2("1984", "George Orwell", 1949);
    book2.display();

    return 0;
}