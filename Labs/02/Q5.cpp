/* 
Name: Syed Saif ur Rehman Shah
Roll number: 23k-0032
*/

#include <iostream>
using namespace std;

struct product{
    string name;
    int price;
    int quantity;
    int id;
};

void add(product obj[], int &n){
    int N;
    cout<<"How many products you want to add: "; cin>>N;
    for(int i=n; i<n+N; i++){
        cout<<"\nDetails for product "<<i+1<<": ";
        cout<<"\nEnter the product name: "; cin>>obj[i].name;
        cout<<"\nEnter the product price: "; cin>>obj[i].price;
        cout<<"\nEnter the product quantity: "; cin>>obj[i].quantity;
        cout<<"\nEnter the product ID: "; cin>>obj[i].id;
    }
    n+=N;
}

void update(product obj[], int n){
    int temp;
    cout<<"Enter the Product ID, you want to update: "; cin>>temp;
    for(int i=0;i<n;i++){
        if(obj[i].id==temp){
            cout<<"Updating details for product "<<i+1<<": \n";
            cout<<"\nEnter the New Product Name: "; 
            cin>>obj[i].name;
            cout<<"\nEnter the price: ";
            cin>>obj[i].price;
            cout<<"\nEnter the quantity: ";
            cin>>obj[i].quantity;
            cout<<"\nEnter the ID: ";
            cin>>obj[i].id;
        }
    }
}

void find(product obj[], int n){
    int temp;
    cout<<"\nEnter the Product ID, you want to search for: "; cin>>temp;
    cout<<"Search complete(0.198 ms)--Matching results are: "<<endl;
    for(int i=0;i<n;i++){
        if(obj[i].id == temp){
            cout<<"\nSimilar Result - Product "<<i+1<<":";
            cout<<"\nProduct ID: "<<obj[i].id;
            cout<<"\nName: "<<obj[i].name;
            cout<<"\nPrice: "<<obj[i].price;
            cout<<"\nQuantity: "<<obj[i].quantity<<"\n\n";
        }
    }
}

int main(){
    int n;
    cout<<"How many products you want to add: "; cin>>n;
    product obj[50];
    for(int i=0; i<n; i++){
        cout<<"\nDetails for product "<<i+1<<": ";
        cout<<"\nEnter the product name: "; cin>>obj[i].name;
        cout<<"\nEnter the product price: "; cin>>obj[i].price;
        cout<<"\nEnter the product quantity: "; cin>>obj[i].quantity;
        cout<<"\nEnter the product ID: "; cin>>obj[i].id;
    }
    int choice;
    do{
        cout<<"1.Add\n2.Update\n3.Find\n4.Exit"<<endl; cin>>choice;
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
