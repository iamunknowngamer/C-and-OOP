#include <iostream>
using namespace std;

class Smartphone{
  
    string brand;
    string model;
    string display_resolution;
    int RAM;
    int ROM;
    int storage;
    
    public:
    void setter(string Brand, string Model, string display, int ram, int rom, int Storage){
        brand = Brand;
        model = Model;
        display_resolution = display;
        RAM = ram;
        ROM = rom;
        storage = Storage;
    }
    void getter(){
        cout<<"The brand name is "<<brand<<"."<<endl;
        cout<<"The model is "<<model<<"."<<endl;
        cout<<"The resolution is "<<display_resolution<<" pixels."<<endl;
        cout<<"The RAM is "<<RAM<<" GB."<<endl;
        cout<<"The ROM is "<<ROM<<" GB."<<endl;
        cout<<"The storage is "<<storage<<" GB."<<endl;
    }
};


int main(){
    
    Smartphone a1;
    
    a1.setter("Nokia","N-3310","69x69", 4, 10 , 100);
    a1.getter();
}
