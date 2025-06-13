#include <iostream>
#include <memory>
#include <string>

namespace Library
{
class Book
{
public:
    std::string title;
    Book(const std::string& t) : title(t) {}
};
} // namespace Library

int main()
{
    // shared_ptr для массива Book с пользовательским делетером
    std::shared_ptr<Library::Book[]> books(new Library::Book[3]{Library::Book("C++ Primer"),
                                                                Library::Book("Effective Modern C++"),
                                                                Library::Book("The C++ Programming Language")},
                                           [](Library::Book* ptr) { delete[] ptr; });

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Book " << i + 1 << ": " << books[i].title << std::endl;
    }

    // Память будет автоматически освобождена при выходе из области видимости
    return 0;
}