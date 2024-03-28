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
        cout<<"Properties of the Triangle:"<<endl;
        cout<<"- Area: "<<area() <<endl;
        cout<<"- Perimeter: "<<perimeter()<<endl;
    }
};


