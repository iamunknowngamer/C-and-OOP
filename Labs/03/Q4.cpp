/* Syed Saif ur Rehman Shah, 23k-0032 */

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

    void makephonecall(string number){
        cout<<"Dailing "<<number<<"..."<<endl;
    }
    void send_message(string n1, string n2){
        cout<<"Sending message from "<<n1<<" to "<<n2<<"..."<<endl;
    }
    void connect_wifi(string wifi){
        cout<<"Connected to "<<wifi<<endl;
    }
    void web_surfing(string web){
        cout<<"Browsing on "<<web<<endl;
    }
};


int main(){
    
    Smartphone a1;
    
    a1.setter("Nokia","N-3310","69x69", 4, 10 , 100);
    a1.getter();
    a1.makephonecall("0314771414");
    a1.send_message("03067584773", "03327851810");
    a1.connect_wifi("StormFibre");
    a1.web_surfing("Opera Gx");
}
