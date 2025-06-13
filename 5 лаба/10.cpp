#include <iostream>
#include <vector>

class Book
{
public:
    std::string title;
    std::string author;
    int         year;

    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

    void display() { std::cout << "Название: " << title << ", Автор: " << author << ", Год: " << year << std::endl; }
};

class Library
{
private:
    std::vector<Book> books;

public:
    void addBook(Book book) { books.push_back(book); }

    void displayAllBooks()
    {
        for (const auto& book : books)
        {
            book.display();
        }
    }
};

int main()
{
    Library library;
    library.addBook(Book("1984", "George Orwell", 1949));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1960));

    library.displayAllBooks();

    return 0;
}