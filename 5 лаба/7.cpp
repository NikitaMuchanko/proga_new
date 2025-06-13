#include <iostream>
#include <string>

class BankAccount
{
private:
    double     balance;
    static int totalAccounts;

public:
    std::string owner;

    BankAccount(std::string o, double b) : owner(o), balance(b) { totalAccounts++; }

    ~BankAccount() { totalAccounts--; }

    static int getTotalAccounts() { return totalAccounts; }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount account1("John Doe", 1000.0);
    BankAccount account2("Jane Doe", 2000.0);

    std::cout << "Общее количество счетов: " << BankAccount::getTotalAccounts() << std::endl;

    return 0;
}