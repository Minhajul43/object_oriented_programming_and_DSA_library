#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int accountNumber;
    double balance;

    //  default  Constructors
    BankAccount() {
        name = "Unknown";
        accountNumber = 0;
        balance = 0.0;
    }
// Parameterwise constructors
    BankAccount(string n, int acc, double bal = 0.0) {
        name = n;
        accountNumber = acc;
        balance = bal;
    }

    //  Deposit (Overloaded)
    void deposit(double amount) {
        balance += amount;
    }

    void deposit(double amount, string msg) {
        balance += amount;
        cout << msg << endl;
    }

    //  Yearly interest (default 5%)
    double yearlyInterest(double rate = 0.05) {
        return balance * rate;
    }

    //  Transfer money
    void transfer(BankAccount &receiver, double amount) {
        if (balance >= amount) {
            balance -= amount;
            receiver.balance += amount;
        }
    }

    // 5 Inline display
    inline void display() {
        cout << "Name: " << name 
             << " | Account: " << accountNumber 
             << " | Balance: " << balance << endl;
    }
};

int main() {
    // Create accounts
    BankAccount a("Rahim", 101, 1000);
    BankAccount b("Karim", 102, 500);

    a.display();
    b.display();

    // Deposit
    a.deposit(200);
    b.deposit(300, "Deposited via Mobile Banking");

    // Interest
    cout << "Rahim interest: " << a.yearlyInterest() << endl;
    cout << "Karim interest: " << b.yearlyInterest(0.07) << endl;

    // Transfer
    a.transfer(b, 400);

    cout << "\n== Final ==" << endl;
    a.display();
    b.display();

    return 0;
}
