/* 
Name: Syed Saif ur Rehman Shah
Roll number: 23k-0032
*/

#include <iostream>
using namespace std;

struct book{
    string title;
    string author;
    int year;
    string genre;
};

void add(book data[], int &n){
    int N;
    cout<<"How many books you wish to add: "; cin>>N;
    for(int i=n;i<n+N;i++){
        cout<<"\n-Adding details for book "<<i+1<<": ";
        cout<<"\nEnter the book title: "; 
        cin>>data[i].title;
        cout<<"\nEnter the book author: ";
        cin>>data[i].author;
        cout<<"\nEnter the year of publication: ";
        cin>>data[i].year;
        cout<<"\nEnter the genre of book: ";
        cin>>data[i].genre;
    }
    n+=N;
}

void update(book data[], int n){
    int year;
    cout<<"Enter the year of the book, you want to update: "; cin>>year;
    for(int i=0;i<n;i++){
        if(data[i].year==year){
            cout<<"Updating details for book "<<i+1<<": \n";
            cout<<"\nEnter The New Book Title: "; 
            cin>>data[i].title;
            cout<<"\nEnter the book author: ";
            cin>>data[i].author;
            cout<<"\nEnter the year of publication: ";
            cin>>data[i].year;
            cout<<"\nEnter the genre of book: ";
            cin>>data[i].genre;
        }
    }
}

void search(book data[], int n){
    string temp;
    cout<<"\nEnter the (author/title) of the book you want to search for: "; cin>>temp;
    cout<<"Search complete(0.198 ms)--Matching results are: "<<endl;
    for(int i=0;i<n;i++){
        if(data[i].title == temp || data[i].author == temp){
            cout<<"\nSimilar Result - Book "<<i+1<<":";
            cout<<"\nBook title: "<<data[i].title;
            cout<<"\nBook author: "<<data[i].author;
            cout<<"\nYear of publication: "<<data[i].year;
            cout<<"\nGenre: "<<data[i].genre<<"\n\n"; 
        }
    }
}

int main(){
    int n;
    cout<<"How many books you want to register: "; cin>>n;
    book data[50];
    for(int i=0;i<n;i++){
        cout<<"\n-Adding details for book "<<i+1<<": ";
        cout<<"\nEnter the book title: "; 
        cin>> data[i].title;
        cout<<"\nEnter the book author: ";
        cin>> data[i].author;
        cout<<"\nEnter the year of publication: ";
        cin>> data[i].year;
        cout<<"\nEnter the genre of book: ";
        cin>> data[i].genre;
    }
    int choice;
    do{
        cout<<"1.Add\n2.Update\n3.Search\n4.Exit"<<endl;
        cin>>choice;
        if(choice==1){
            add(data,n);
        }
        if(choice==2){
            update(data,n);
        }
        else if(choice==3){
            search(data,n);
        }
        else if(choice==4){
            cout<<"Program Terminated.";
            exit;
        }
    }while(choice!=4);
}
