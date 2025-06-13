#include <iostream>
#include <string>

class BankAccount
{
private:
    double balance;

public:
    std::string owner;

    BankAccount(std::string o, double b) : owner(o), balance(b) {}

    void deposit(double amount) { balance += amount; }

    bool withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() { return balance; }
};

int main()
{
    BankAccount account("John Doe", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);

    std::cout << "Владелец: " << account.owner << ", Баланс: " << account.getBalance() << std::endl;

    return 0;
}