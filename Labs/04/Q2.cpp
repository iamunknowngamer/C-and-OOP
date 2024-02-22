/* Syed Saif ur Rehman Shah (23k-0032) */

#include <iostream>
using namespace std;

class Book{
    string name;
    string author;
    string isbn_number;
    int total_pageCount;
    int track;

    public:
    Book(void){
        total_pageCount=1000;
        track =0;
    };
    
    void setter(string name, string author, string number){
        this->name=name;
        this->author=author;
        isbn_number=number;
    }
    
    void display(){
        cout<<"Name of the book: "<<name;
        cout<<"\nName of the author: "<<author;
        cout<<"\nISBN Number: "<<isbn_number;
        cout<<"\nTotal Pages: "<<total_pageCount;
        cout<<"\nProgress: "<<track;
    }
};

int main(){
    Book b1;
    b1.setter("How to get good at programming", "No idea", "isbn-102312");
    b1.display();
}
