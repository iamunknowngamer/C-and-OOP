#include <iostream>
#include <cmath>
using namespace std;

class Shape{
public:
    virtual double area() const{return 0;}
    virtual double perimeter() const{return 0;}
    virtual void Display() const{}
};

class Circle : public Shape{
    private:
    double radius;

    public:
    Circle(){}
    Circle(double r):radius(r){}
    virtual double area() const override{return 3.14*radius*radius;}
    virtual double perimeter() const override{return 2*3.14*radius;};
    virtual void Display() const override{
        cout<<"Properties of Circle: "<<endl;
        cout<<"- Area: "<<area()<<endl;
        cout<<"- Perimeter: "<<perimeter()<<endl;
        cout<<"- Diameter: "<< 2*radius<<endl;
    }
};

class Rectangle : public Shape{
    private:
    double length, width;

    public:
    Rectangle(double l, double w) : length(l), width(w) {}
    virtual double area() const override{return length*width;}
    virtual double perimeter() const override{return 2*length+2*width;};
    virtual void Display() const override{
        cout<<"Properties of Rectangle: "<<endl;
        cout<<"- Area: "<<area()<<endl;
        cout<<"- Perimeter: "<<perimeter()<<endl;
        cout<<"- Diagonal: "<< sqrt((length*length)+(width*width))<<endl;
    }
};

class Square : public Shape{
    private:
    double length;

    public:
    Square(double l) : length(l) {}
    virtual double area() const override{return length*length;}
    virtual double perimeter() const override{return 2*length;};
    virtual void Display() const override{
        cout<<"Properties of Square: "<<endl;
        cout<<"- Area: "<<area()<<endl;
        cout<<"- Perimeter: "<<perimeter()<<endl;
        cout<<"- Diagonal: "<< sqrt(2)*length<<endl;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

    public:
    Triangle(double s1, double s2, double s3): 
    side1(s1), side2(s2), side3(s3) {}

    virtual double perimeter() const override {return side1 + side2 + side3;}
    virtual double area() const override{
        double temp = perimeter()/2;
        return sqrt(temp*((temp-side1)*(temp-side2)*(temp-side3)));
    }
    virtual void Display() const override{
        cout<<"Properties of Triangle:"<<endl;
        cout<<"- Area: "<<area()<<endl;
        cout<<"- Perimeter: "<<perimeter()<<endl;
    }
};

class EquilateralTriangle : public Triangle{
    public:
    EquilateralTriangle(double side):Triangle(side, side ,side){} 
    virtual void Display() const override{
        cout<<"Properties of Equilateral Triangle:"<<endl;
        cout<<"- Area: "<<area()<<endl;
        cout<<"- Perimeter: "<<perimeter()<<endl;
    }
};

int main(){

    Shape* shape;
    cout<<"Welcome to the Geometry Competition Calculator!"<<endl<<endl;
    int choice;
    do{
        cout<<"Please select a shape:\n1. Circle\n2. Rectangle\n3. Square\n4. Triangle\n5. Exit\nEnter your choice: "; 
        cin>>choice;
        
        switch(choice){
        case 1:
            double r;
            cout<<"Enter the radius of the circle: "; cin>>r;
            shape = new Circle(r);
            shape->area();
            shape->perimeter();
            shape->Display();
            break;
        case 2:
            double len ,width;
            cout<<"Enter the length of the rectangle: "; cin>>len;
            cout<<"Enter the width of the rectangle: "; cin>>width;
            shape = new Rectangle(len, width);
            shape->area();
            shape->perimeter();
            shape->Display();
            break;
        case 3:
            double l;
            cout<<"Enter the length of the square: "; cin>>l;
            shape = new Square(l);
            shape->area();
            shape->perimeter();
            shape->Display();
            break;
        case 4:
            double s1,s2,s3;
            cout<<"Enter the length of three sides of the triangle: "; cin>>s1;cin>>s2;cin>>s3;
            if(s1==s2==s3){
                shape = new EquilateralTriangle(s1);
                shape->area();
                shape->perimeter();
                shape->Display();
            }
            else{
                shape = new Triangle(s1,s2,s3);
                shape->area();
                shape->perimeter();
                shape->Display();
            }
            break;
        case 5:
            cout<<"Program Terminated."; exit (1);
        default:
            cout<<"Invalid Choice!\n";
            break;
        }
    }while(choice!=5);
}
