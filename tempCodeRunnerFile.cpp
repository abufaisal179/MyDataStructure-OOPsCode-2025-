// Faisal's Program: TITLE >> Bank Management System
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <vector>
using namespace std;

class Customer {
private:
    string name;
    long double balance;
    static string dateOfAcCreation;

public:
    long long accountNumber;

    void inputDetails(const string& name, long long accountNumber, long double balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
        dateOfAcCreation = "25-09-2024";
    }

    void updateDetails(const string& name, long double balance, long long accountNumber, char option) {
        if (option == '1') this->name = name;
        else if (option == '2') this->balance = balance;
        else if (option == '3') this->accountNumber = accountNumber;
    }

    void transact(long double amount, char type) {
        if (type == '1') this->balance += amount;
        else if (type == '2' && this->balance >= amount) this->balance -= amount;
    }

    void display() const {
        cout << "\n\tName: " << name
             << "\n\tAccount Number: " << accountNumber
             << "\n\tBalance: " << balance
             << "\n\tDate of Account Creation: " << dateOfAcCreation << endl;
    }
};

string Customer::dateOfAcCreation = "";
vector<Customer> customers;

void waitIcon() {
    cout << "Processing";
    for (int i = 0; i < 3; ++i) {
        cout << ".";
        sleep(1);
    }
    cout << " Done!" << endl;
}

int findCustomer(long long accountNumber) {
    for (size_t i = 0; i < customers.size(); ++i) {
        if (customers[i].accountNumber == accountNumber) return i;
    }
    return -1;
}

void addAccount() {
    int count;
    cout << "\nEnter the number of accounts to add: ";
    cin >> count;
    while (count--) {
        string name;
        long long accountNumber;
        long double balance;

        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Deposit: ";
        cin >> balance;

        Customer newCustomer;
        newCustomer.inputDetails(name, accountNumber, balance);
        customers.push_back(newCustomer);
    }
    waitIcon();
}

void searchAccount() {
    cout << "\n1. Show All Accounts\n2. Search by Account Number\nChoose an option: ";
    char option = getch();
    if (option == '1') {
        for (const auto& customer : customers) customer.display();
    } else if (option == '2') {
        long long accountNumber;
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;
        int index = findCustomer(accountNumber);
        if (index != -1) customers[index].display();
        else cout << "Account not found." << endl;
    }
}

void updateAccount() {
    long long accountNumber;
    cout << "\nEnter Account Number to Update: ";
    cin >> accountNumber;
    int index = findCustomer(accountNumber);

    if (index != -1) {
        cout << "\n1. Update Name\n2. Update Balance\n3. Update Account Number\nChoose an option: ";
        char option = getch();
        if (option == '1') {
            string name;
            cout << "Enter New Name: ";
            cin >> name;
            customers[index].updateDetails(name, 0, 0, '1');
        } else if (option == '2') {
            long double balance;
            cout << "Enter New Balance: ";
            cin >> balance;
            customers[index].updateDetails("", balance, 0, '2');
        } else if (option == '3') {
            long long newAccountNumber;
            cout << "Enter New Account Number: ";
            cin >> newAccountNumber;
            customers[index].updateDetails("", 0, newAccountNumber, '3');
        }
        waitIcon();
    } else {
        cout << "Account not found." << endl;
    }
}

void deleteAccount() {
    cout << "\n1. Delete All Accounts\n2. Delete by Account Number\nChoose an option: ";
    char option = getch();
    if (option == '1') customers.clear();
    else if (option == '2') {
        long long accountNumber;
        cout << "Enter Account Number to Delete: ";
        cin >> accountNumber;
        int index = findCustomer(accountNumber);
        if (index != -1) {
            customers.erase(customers.begin() + index);
            waitIcon();
        } else {
            cout << "Account not found." << endl;
        }
    }
}

void transaction() {
    cout << "\n1. Deposit\n2. Withdraw\nChoose an option: ";
    char option = getch();
    long long accountNumber;
    long double amount;

    cout << "\nEnter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Amount: ";
    cin >> amount;

    int index = findCustomer(accountNumber);
    if (index != -1) {
        customers[index].transact(amount, option);
        waitIcon();
    } else {
        cout << "Account not found." << endl;
    }
}

int main() {
    string password = "4633", email = "vishal@gmail.com";
    string inputPassword, inputEmail;
    int attempts = 0;

    while (attempts < 3) {
        cout << "\nEnter Email: ";
        cin >> inputEmail;
        cout << "Enter Password: ";
        cin >> inputPassword;

        if (inputEmail == email && inputPassword == password) break;
        cout << "Invalid credentials. Try again." << endl;
        attempts++;
    }

    if (attempts == 3) {
        cout << "Too many attempts. Exiting..." << endl;
        return 0;
    }

    while (true) {
        cout << "\n1. Add Account\n2. Search Account\n3. Update Account\n4. Delete Account\n5. Transactions\n6. Exit\nChoose an option: ";
        char option = getch();

        switch (option) {
            case '1': addAccount(); break;
            case '2': searchAccount(); break;
            case '3': updateAccount(); break;
            case '4': deleteAccount(); break;
            case '5': transaction(); break;
            case '6': return 0;
            default: cout << "Invalid option." << endl;
        }
    }
    return 0;
}
