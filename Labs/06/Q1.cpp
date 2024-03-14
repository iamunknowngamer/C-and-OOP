#include <iostream>
using namespace std;

class BankAccount{
    
    int accountid;
    double balance;
    int *transactionHistory;
    int numTransactions;
    
    public:
    BankAccount(int accountid, double balance, int numTransactions) : 
    accountid(accountid), balance(balance), numTransactions(numTransactions) {
        transactionHistory = new int[numTransactions];
        for(int i=0; i< numTransactions; i++){
            cout<<"Enter Transaction History Number "<<i+1<<": ";
            cin>>transactionHistory[i];
        }
    }
    
    BankAccount(BankAccount &account1){
        this->accountid = account1.accountid;
        this->balance = account1.balance;
        this->numTransactions = account1.numTransactions;
        for(int i=0; i< numTransactions; i++){
            transactionHistory[i] = account1.transactionHistory[i];
        }
    }

    void display(){
        cout<<"Account ID: "<< accountid<<endl<<"Balance: "<<balance<<endl;
        for(int i=0; i<numTransactions; i++){
            cout<<"Transaction History "<<i+1<<transactionHistory[i]<<endl;
        }
    }
    
    void update(int new_transactions){
        delete[] transactionHistory; 
        transactionHistory = new int[new_transactions];
        for(int i=0; i< numTransactions; i++){
            cout<<"Enter Transaction History Number  "<<i+1<<": ";
            cin>>transactionHistory[i];
        } 
    }   
    
    ~BankAccount(){
        delete[] transactionHistory;
    }
    
};

int main(){
    BankAccount account(6969, 1200.50, 2), account1(account);
    cout<<"Displaying Account 1 Details: "<<endl;
    account.display();
    cout<<"Displaying Account 2 Details: "<<endl;
    account1.display();
    
    return 0;
}

