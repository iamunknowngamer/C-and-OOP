/* Syed Saif ur Rehman Shah (23k-0032) */

#include <iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;
    
    public:
    BankAccount(int accountNumber, string accountHolderName, int balance){
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }
    
    void deposit(double deposit){
        balance += deposit;
        cout<<"\nCurrent balance: "<<balance;
    }
    
    void withdraw(double withdraw){
        if(balance>0){
        balance -= withdraw;
        cout<<"\nCurrent balance: "<<balance;
        }
        else cout<<"\nInsufficient balance";
    }
    
    void display(int i){
            cout<<"\n\nDetails of Account "<<i+1<<": ";
            cout<<"\nAccount Number: "<<accountNumber;
            cout<<"\nAccount Holder Name: "<<accountHolderName;
            cout<<"\nAccount Balance: "<<balance;
    }
};

int main(){
    BankAccount data[3] = {
        BankAccount(12345, "Saif", 1000.0),
        BankAccount(67890, "Abdul", 500.0),
        BankAccount(11223, "Talha", 1500.0)
    };
    
    for(int i=0; i<3; i++){
        data[i].display(i);
    }
    int acc; cout<<"\n\nWhich account you want to deposit/withdraw: "; cin>>acc;
    data[acc].deposit(500.0);
    data[acc].withdraw(300.0);
}
