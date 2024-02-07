#include <iostream>
using namespace std;

struct product{
    string name;
    int price;
    int quantity;
    int id;
};

void add(product obj[], int n){
    
}

void update(product obj[], int n){
    
}

void find(product obj[], int n){
    
}

int main(){
    int n;
    cout<<"How many products you want to add: "; cin>>n;
    product obj[n];
    for(int i=0; i<n; i++){
        cout<<"\nDetails for product "<<i+1<<": ";
        cout<<"\nEnter the product name: "; cin>>obj[i].name;
        cout<<"\nEnter the product price: "; cin>>obj[i].price;
        cout<<"\nEnter the product quantity: "; cin>>obj[i].quantity;
        cout<<"\nEnter the product ID: "; cin>>obj[i].id;
    }
    int choice;
    do{
        cout<<"1.Add\n2.Update\n3.Find\n4.Exit"<<endl;
        if(choice==1){
            add(obj,n);
        }
        else if(choice==2){
            update(obj,n);
        }
        else if(choice==3){
            find(obj,n);
        }
        else if(choice==4){
            cout<<"Program Terminated."; exit;
        }
    }while(choice!=4);
}
