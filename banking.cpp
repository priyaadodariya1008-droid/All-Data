#include<iostream>
using namespace std;
class BankAccount {
public:
    int accountNumber;
    string accountHolderName;
    double balance;

    BankAccount() { 
        accountNumber = 0;
        accountHolderName = "";
        balance = 0;
    }

    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public BankAccount {
public:
    double interestRate;

    SavingsAccount(int accNo, string name, double bal, double rate) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
        interestRate = rate;
    }

    double calculateInterest() {
        return balance * interestRate / 100;
    }
};
int main() {
    SavingsAccount s(101, "Priya", 60000, 5);

    s.displayAccountInfo();

    cout << "Interest: " << s.calculateInterest() << endl;

    return 0;
}