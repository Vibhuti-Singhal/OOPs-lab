#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    float balance;

public:
    // Default Constructor
    BankAccount() {
        accNo = 0;
        name = "";
        balance = 0;
    }

    // Parameterized Constructor
    BankAccount(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
    }

    // Input Function
    void input() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit Function
    void deposit() {
        float amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully!" << endl;
    }

    // Withdraw Function
    void withdraw() {
        float amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
    }

    // Display Function
    void display() {
        cout << "----- ACCOUNT DETAILS -----" << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account;   // Object using default constructor
    int choice;

    cout << "====== BANK MANAGEMENT SYSTEM ======" << endl;

    // Taking user input
    account.input();

    do {
        cout << "----- MENU -----" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank You for Using Bank Management System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}