#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string account_holder;
    double balance;

public:
    BankAccount(std::string account_holder_name, double balance_initial)
        : account_holder(account_holder_name), balance(0)
    {
        if (balance_initial < 0)
        {
            std::cout << "Invalid Amount! Account creation failed\n";
        }
        else
        {
            balance = balance_initial;
            std::cout << "Account created successfully!\n";
        }
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount < 0)
            std::cout << "Invalid deposit\n";
        else
            balance += amount;
    }

    double withdraw(double amount)
    {
        if (amount < 0 || amount > balance)
        {
            std::cout << "Sorry You cannot withdraw that amount!\n";
            return 0.0;
        }
        balance -= amount;
        return amount;
    }
    std::string get_account_holder_name() const
    {
        return account_holder;
    }
};

int main()
{
    BankAccount myAccount("Minrutha", 1000);

    std::cout << "\n--- Testing Failure Cases ---\n";
    std::cout << "Current balance: " << myAccount.getBalance() << "\n";
    std::cout << "Attempting to withdraw 5000...\n";
    myAccount.withdraw(5000);
    std::cout << "Balance after invalid withdrawal: " << myAccount.getBalance() << "\n";
    std::cout << "Attempting to deposit -100...\n";
    myAccount.deposit(-100);
    std::cout << "Balance after invalid deposit: " << myAccount.getBalance() << "\n";
    return 0;
}
