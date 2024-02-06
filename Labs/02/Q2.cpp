#include <iostream>
using namespace std;

struct book{
    string title;
    string author;
    int year;
    string genre;
};

int main(){
    int n=2;
    book data[n];
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
            int N;
            cout<<"How many books you wish to add: "; cin>>N;
            int total = n+N;
            book data[total];
            for(int i=n;i<total;i++){
                cout<<"\n-Adding details for book "<<total-n+1<<": ";
                cout<<"\nEnter the book title: "; 
                cin>> data[i].title;
                cout<<"\nEnter the book author: ";
                cin>> data[i].author;
                cout<<"\nEnter the year of publication: ";
                cin>> data[i].year;
                cout<<"\nEnter the genre of book: ";
                cin>> data[i].genre;
                }
            }
        else if(choice==2){
            int year;
            cout<<"Enter the year of the book, you want to update: ";
            cin>>year;
            for(int i=0;i<n;i++){
                if(data[i].year==year){
                    cout<<"Updating details for book "<<i+1<<": \n";
                    cout<<"\nEnter The New Book Title: "; 
                    cin>> data[i].title;
                    cout<<"\nEnter the book author: ";
                    cin>> data[i].author;
                    cout<<"\nEnter the year of publication: ";
                    cin>> data[i].year;
                    cout<<"\nEnter the genre of book: ";
                    cin>> data[i].genre;
                }
            }
        }
        else if(choice==3){
            string temp;
            cout<<"\nEnter the (author/title) of the book you want to search for: "; cin>>temp;
            cout<<"Search complete(0.198 ms)--Matching results are: "<<endl;
                for(int i=0;i<n;i++){
                    if(data[i].title == temp || data[i].author == temp){
                        cout<<"\nSimilar Result "<<i+1<<":";
                        cout<<"\nBook title: "<<data[i].title;
                        cout<<"\nBook author: "<<data[i].author;
                        cout<<"\nYear of publication: "<<data[i].year;
                        cout<<"\nGenre: "<<data[i].genre<<"\n\n"; 
                    }
                }
            }
        else if(choice==4){
            cout<<"Program Terminated.";
            exit;
            }
    }while (choice!=4);
}
