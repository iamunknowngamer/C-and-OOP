// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;

class Square{
    float sideLength;
    float area;
    static float allareas;

    public:
    Square(void){
        sideLength=0.0;
    }
    Square(float sideLength=0.0){
        this->sideLength = sideLength;
    }
    void calculate(){
        area = sideLength*sideLength;
        allareas += area;
    }
    void setter(float sideLength){
        this->sideLength=sideLength;
        // this->area=area;
        // this->allareas=allareas;
    }
    void getter(){
       cout<<"Length: "<<sideLength<<endl;
       cout<<"Area: "<<area<<endl;
       cout<<"All Areas: "<<allareas<<endl;
    }

};

float Square::allareas=0.0;

int main(){
    Square s1(5);
    s1.calculate();
    s1.getter();
    Square s2(6);
    s2.calculate();
    s2.getter();
    Square s3(7);
    s3.calculate();
    s3.getter();
}
