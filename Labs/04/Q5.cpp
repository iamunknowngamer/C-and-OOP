//Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;

class Office{
    string Location="";
    int SeatingCapacity=0;
    string *Furniture=nullptr;

    public:
    Office(string Location="", int SeatingCapacity=0, int size=3) : 
    Location(Location), SeatingCapacity(SeatingCapacity){
    Furniture = new string[size];
    }

    ~Office(){
        cout<<"Memory freed successfully"<<endl;
        delete[] Furniture;
    }
};

int main(){
    Office* o1= new Office("",0,5);
    delete o1;
}
