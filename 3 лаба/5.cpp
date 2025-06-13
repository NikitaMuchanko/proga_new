#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    Student(const std::string& n) : name(n) {}
};

int main()
{
    Student* student = new Student("Alice");
    std::cout << "Student name: " << student->name << std::endl;
    delete student;
    return 0;
}