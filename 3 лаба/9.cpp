#include <iostream>
#include <memory>
#include <string>

class Student
{
public:
    std::string name;
    Student(const std::string& n) : name(n) {}
};

int main()
{
    std::unique_ptr<Student> student = std::make_unique<Student>("Alice");
    std::cout << "Student name: " << student->name << std::endl;
    // !Память автоматически освобождается при выходе из области видимости
    return 0;
}