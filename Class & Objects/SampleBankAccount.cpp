#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;
public:
    BankAccount(int accountNumber, float balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    void deposit(float num) {
        balance = balance + num;
        cout << "Deposits: "<< num <<", ";
        cout << "New Available balance: " << balance << endl;
    }
    void withdraw(float num) {
        if(num > balance ) {
            cout << "Insufficiant Balance, ";
            cout << "Available balance: " << balance << endl;
        } else {
            balance = balance - num;
            cout << "Withdrew: "<< num <<", ";
            cout << "Remaining Balance: " << balance << endl;
        }
    }
    void getBalance() {
        cout <<"Available Balance: " << balance << endl;
    }
};

int main() {
    BankAccount customer1(0001,25000);
    customer1.getBalance();
    customer1.deposit(3245);
    customer1.withdraw(30000);
    

    return 0;
}
