#include <iostream>
using namespace std;

struct book{
    string title;
    string author;
    string year;
    string genre;
};

int main(){
    int n;
    cout<<"Enter the number of books you want to manage the data of: ";
    cin>>n; 
    int choice;
    book data[n];
    do{
        cout<<"1.Add Data\n2.Search book by (author/title)\n3.Exit"<<endl;
        cin>>choice;
        if(choice==1){
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
            }
        else if(choice==2){
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
        else if(choice==3){
            cout<<"Program Terminated.";
            exit;
            }
    }while (choice!=3);
}
