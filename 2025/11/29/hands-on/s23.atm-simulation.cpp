#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Exception: Insufficient balance for withdrawal!";
    }
};

class InvalidAmountException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Exception: Invalid amount for deposit!";
    }
};

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0.0;
    }

    BankAccount(double initialBalance)
    {
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount < 0)
        {
            throw InvalidAmountException();
        }
        balance += amount;
        cout << "Deposit done. New balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            throw InsufficientFundsException();
        }
        balance -= amount;
        cout << "Withdraw done. New balance: " << balance << endl;
    }
};

int main()
{
    BankAccount ba = BankAccount(1000);

    try
    {
        ba.deposit(100);
    }
    catch (const InvalidAmountException &ex)
    {
        cout << ex.what() << endl;
    }

    try
    {
        ba.withdraw(2000);
    }
    catch (const InsufficientFundsException &ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}