#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class Book{
    public:
    string title;
    string author; 
    string publisher;
    
    Book(string title, string author, string publisher) : title(title), author(author), publisher(publisher) {}
    
    void display(){
        cout << "Title = " << this->title 
        << "\nAuthor = " << this->author 
        << "\nPublisher = " << this->publisher << endl;
    }
};

class FictionBook : public Book{
    public:
    string genre;
    string protagonist;
    
    FictionBook(string title, string author, string publisher, string genre, string protagonist) : Book(title, author, publisher), genre(genre), protagonist(protagonist) {}
    
    void display(){
        Book::display();
        cout << "Genre = " << genre
        << "\nProtagonist = " << protagonist << endl;
    }
};

int main(){
    FictionBook b1("Sword Art Online", "Akira Tomoya", "Izumi", "Magic", "Kirito");
    b1.display();
}
