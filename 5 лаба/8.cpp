#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int         age;

    Student(std::string n, int a) : name(n), age(a) {}

    Student(const Student& other) : name(other.name), age(other.age) {}

    void display() { std::cout << "Имя: " << name << ", Возраст: " << age << std::endl; }
};

int main()
{
    Student student1("Alice", 20);
    Student student2 = student1;

    student1.display();
    student2.display();

    return 0;
}