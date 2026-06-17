#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
    string name;
    double balance;
     
    public:
    //constructor to initialize the attributes of the class
    BankAccount(string name , double balance){
        this->name = name;
        this->balance = balance;
    
    }
    //Method to set the name of the account holder
    void setName(string name){
        this-> name=name;

    }
    //Method to get the name of the account holder
    string getName(){
        return name;

    }
    //Method to get the balance of the account 
    double getBalance(){
        return balance;
    }
    //Method to make a deposit
    void deposit(double amount){
        balance+=amount; // it updates the balance 


    }
    // Method to make a withdrawal
    bool withdrawal(double amount) {
        if (amount > balance) {
            cout << "Insufficient amount" << endl;
            return false;
        }
        balance -= amount; // Update the balance
        return true;
    }
};

int main(){
    BankAccount account1("John Doe", 1000.0);
    cout << "Account Holder: " << account1.getName() << endl;
    cout << "Initial Balance: $" << account1.getBalance() << endl;

    account1.deposit(500.0);
    cout << "Balance after deposit: $" << account1.getBalance() << endl;

    if (account1.withdrawal(200.0)) {
        cout << "Balance after withdrawal: $" << account1.getBalance() << endl;
    }

    if (!account1.withdrawal(1500.0)) {
        cout << "Balance remains: $" << account1.getBalance() << endl;
    }

    return 0;
}