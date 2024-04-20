#include <iostream>
using namespace std;

const double PI = 3.14;

class Shape{
    
public:
    double area(double radius) const{return PI*radius*radius;}
    int area(int length, int width) const{return length*width;}
    double area(double base, double height) const{return 0.5*base*height;}
    double perimeter(double radius) const{return 2*PI*radius;}
    double perimeter(double length, double width) const {return 2*(length + width);}
    double perimeter(double side1,double side2,double side3) const{return side1+side2+side3;}
};

int main() {
    Shape shape;

    double Radius = 5.0;
    cout<<"Radius of Circle: "<<Radius<<endl;
    cout<<"Area: "<<shape.area(Radius)<<endl;
    cout<<"Perimeter: "<<shape.perimeter(Radius)<<endl;

    int Length = 6;
    int Width = 4;
    cout<<"Length of Rectangle: "<<Length<<", Width of Rectangle: "<<Width<<endl;
    cout<<"Area: "<<shape.area(Length, Width)<<endl;
    cout<<"Perimeter: "<<shape.perimeter(Length, Width)<<endl;

    double Base = 7.0;
    double Height = 3.0;
    double Side1 = 5.0;
    double Side2 = 6.0;
    cout<<"Base of triangle "<<Base<<", Height of triangle: "<<Height<<endl;
    cout<<"Area: "<<shape.area(Base, Height)<<endl;
    cout<<"Perimeter: "<<shape.perimeter(Side1, Side2, Base)<<endl;

}
