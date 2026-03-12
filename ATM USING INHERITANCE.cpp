#include<iostream>
using namespace std;

class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double bal)
    {
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    void checkbalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

class savingaccount : public BankAccount
{
public:
    savingaccount(double balance) : BankAccount(balance) {}

    void interest()
    {
        balance += balance * 0.05;
    }
};

int main()
{
    savingaccount sa(0);   // Initial balance

    sa.deposit(5000);
    sa.withdraw(2000);
    sa.checkbalance();
    sa.interest();
    sa.checkbalance();

    return 0;
}