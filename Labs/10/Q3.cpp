#include <iostream>
using namespace std;

class Shape{
    float area;
    
    public:
    Shape(float area): area(area){}
    
    Shape operator+(Shape &obj){
        return obj.area+area;
    }
    void display(){
        cout<<"Area of both combined: "<<area<<endl;
    }
};

int main(){
    Shape s1(3);
    Shape s2(4);
    Shape s3 = s1+s2;
    s3.display();
}
