//Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
#include <array>
using namespace std;

class Office{
    string Location="";
    int SeatingCapacity=0;
    string Furniture[3]={"","",""};

    public:
    Office(string Location="", int SeatingCapacity=0, array<string, 3> Furniture={"","",""}): 
    Location(Location), 
    SeatingCapacity(SeatingCapacity),
    Furniture{Furniture[0], Furniture[1], Furniture[2]}{}

    void display(){
        cout<<Location<<endl<<SeatingCapacity<<endl<<Furniture[0]<<" "<<Furniture[1]<<" "<<Furniture[2]<<endl;
    }
};

int main(){
    Office o1("", 0, {"","",""});
    Office o2("xyz", 3);
    Office o3("abc");
    Office o4("Workspace", 3, {"Desk", "Chair", "Coffee"});
    o4.display();
}
