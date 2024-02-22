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
    Book();
    Book(string name, string a, string n, int total, int track){
        this->name = name;
        author = a;
        isbn_number = n;
        total_pageCount = total;
        track = track;
    }
    // // void display(){
    // //     cout<<name<<endl<<author<<endl<<isbn_number<<endl<<total_pageCount<<endl<<track<<endl;
    // }
    void progress(){
        while(track!=total_pageCount){
            string choice;
            cout<<"current progress -> "<<track<<"\nkeep reading? (yes/no): "; cin>>choice;
            if(choice=="yes"){
                track++;
            }
            else {cout<<"progress saved.."; break;}
            if(track==total_pageCount) cout<<"read the whole book -- progress: "<<track<<"/"<<track;
        }
        
    }
};

int main(){
    Book b1("xyz","abc","ib321-754",5,0);
    b1.progress();
    // b1.display();
}
