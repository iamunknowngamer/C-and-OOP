#include <iostream>
using namespace std;

class Perimeter{
    float length, breadth;
    public:
  
    Perimeter(float length, float breadth): length(length), breadth(breadth){}
  
    int calculate(){
    return 2*(length+breadth);
  }
  friend class PrintClass;
};

class PrintClass{
    
    public:
    void display(Perimeter p){
        cout<<"The perimeter is: "<<p.calculate();
    }
};


int main(){
    
    Perimeter perimeter(3.5, 4.5);
    perimeter.calculate();
    
    PrintClass obj;
    obj.display(perimeter);
    
}
