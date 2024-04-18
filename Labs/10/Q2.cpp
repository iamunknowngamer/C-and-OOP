#include <iostream>
using namespace std;

class Program{
    int a;
    public:
    Program(int a): a(a) {}
    Program operator--(){
        return a*4;
    }
    Program operator--(int){
        return a/4;
    }
    void display(){
        cout<<"A: "<<a<<endl;
    }
};

int main(){
    Program obj(4);
    obj = obj--;
    obj.display();
    obj = --obj;
    obj.display();
}
