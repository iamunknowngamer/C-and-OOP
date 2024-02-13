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
    void setbrand(string Brand){
        brand = Brand;
    }
    void setmodel(string Model){
        model = Model;
    }
    void setdisplay(string display){
        display_resolution = display;
    }
    void setRAM(int ram){
        RAM = ram;
    }
    void setROM(int rom){
        ROM = rom;
    }
    void setstorage(int Storage){
        storage = Storage;
    }
    
    
    string getbrand(){
        return brand;
    }
    string getmodel(){
        return model;
    }
    string getdisplay(){
        return display_resolution;
    }
    int getRAM(){
        return RAM;
    }
    int getROM(){
        return ROM;
    }
    int getstorage(){
        return storage;
    }
};


int main(){
    
    Smartphone a1;
    
    a1.setbrand("Nokia");
    a1.setmodel("N-3310");
    a1.setdisplay("40x50");
    a1.setRAM(4);
    a1.setROM(10);
    a1.setstorage(1000);
    
    
    cout<<"The brand name is "<<a1.getbrand()<<"."<<endl;
    cout<<"The model is "<<a1.getmodel()<<"."<<endl;
    cout<<"The resolution is "<<a1.getdisplay()<<" pixels."<<endl;
    cout<<"The RAM is "<<a1.getRAM()<<" GB."<<endl;
    cout<<"The ROM is "<<a1.getROM()<<" GB."<<endl;
    cout<<"The storage is "<<a1.getstorage()<<" GB."<<endl;
}
