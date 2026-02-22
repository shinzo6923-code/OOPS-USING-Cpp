#include <iostream>
using namespace std;

class ATM {
private:
    string name;
    int accountNumber;
    double balance;
    int pin;

public:
    // Parameterized Constructor
    ATM(string n, int accNo, double initialBalance, int p) {
        name = n;
        accountNumber = accNo;
        balance = (initialBalance >= 0) ? initialBalance : 0;
        pin = p;
    }

    // Getter (Read Only)
    string getName() const {
        return name;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    // PIN Verification
    bool verifyPIN(int enteredPin) const {
        return enteredPin == pin;
    }

    // Controlled Modification - Deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful!\n";
        } else {
            cout << "Invalid Amount!\n";
        }
    }

    // Controlled Modification - Withdraw
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance or Invalid Amount!\n";
        }
    }

    // Controlled Modification - Change PIN
    void changePIN(int oldPin, int newPin) {
        if (oldPin == pin) {
            pin = newPin;
            cout << "PIN Changed Successfully!\n";
        } else {
            cout << "Incorrect Old PIN!\n";
        }
    }
};

int main() {
    string name;
    int accNo, pin;
    double balance;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Set 4-digit PIN: ";
    cin >> pin;

    ATM user(name, accNo, balance, pin);

    int enteredPin;
    int attempts = 0;
    bool accessGranted = false;

    // PIN Authentication (3 Attempts)
    while (attempts < 3) {
        cout << "\nEnter PIN to access ATM: ";
        cin >> enteredPin;

        if (user.verifyPIN(enteredPin)) {
            accessGranted = true;
            break;
        } else {
            cout << "Incorrect PIN!\n";
            attempts++;
        }
    }

    if (!accessGranted) {
        cout << "Card Blocked! Too many wrong attempts.\n";
        return 0;
    }

    int choice;
    double amount;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Current Balance: " << user.getBalance() << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            user.deposit(amount);
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            user.withdraw(amount);
            break;

        case 4:
            int oldPin, newPin;
            cout << "Enter old PIN: ";
            cin >> oldPin;
            cout << "Enter new PIN: ";
            cin >> newPin;
            user.changePIN(oldPin, newPin);
            break;

        case 5:
            cout << "Thank you for using ATM!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}