// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;


class Engine{
    string type;

    public:
    Engine(string Name) : type(Name) {}
    string get_engineName(){
        return type;
    }
};

class Wheels{
    int type;

    public:
    Wheels(int n) : type(n) {}
    int getWheels(){
        return type;
    }
};

class Headlights{
    string type;

    public:
    Headlights(string lights) : type(lights) {}
    string getLights(){
        return type;
    }
};

class Steering{
    string type;

    public:
    Steering(string steeringWheel) : type(steeringWheel) {}
    string getSteering(){
        return type;
    }
};

class Car{
    Engine *engine;
    Wheels *wheels;
    Headlights *headlights;
    Steering *steering;

    public:
    Car(Engine *engine, Wheels *wheels, Headlights *headlights, Steering *steering): 
    engine(engine), wheels(wheels), 
    headlights(headlights), steering(steering){}

    void display(){
        cout<<"Engine: "<<engine->get_engineName()<<endl;
        cout<<"Wheels: "<<wheels->getWheels()<<endl;
        cout<<"Headlights: "<<headlights->getLights()<<endl;
        cout<<"Steering: "<<steering->getSteering()<<endl;
    }
};

int main(){
    Engine e1("V8");
    Wheels w(4);
    Headlights light("LED");
    Steering steer("Axel");

    Car c1(&e1, &w, &light, &steer);
    c1.display();
}
