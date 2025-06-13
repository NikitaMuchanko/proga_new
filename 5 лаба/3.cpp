#include <iostream>
#include <string>

class Book
{
public:
    std::string title;
    std::string author;
    int         year;

    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

    ~Book() { std::cout << "Книга '" << title << "' уничтожена." << std::endl; }

    void display() { std::cout << "Название: " << title << ", Автор: " << author << ", Год: " << year << std::endl; }
};

int main()
{
    Book book("1984", "George Orwell", 1949);
    book.display();

    return 0;
}