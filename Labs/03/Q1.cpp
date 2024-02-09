/*
Name: Syed Saif ur Rehman Shah
Roll No: 23k-0032
*/

#include <iostream>
using namespace std;

class BoardMarker{

    private:                        
    string brand;
    string shade;
    bool refillable;
    bool inkstatus;

    public:
    //setters
    void setbrand(string newbrand){
        brand = newbrand;
    }
    void setshade(string newshade){
        shade = newshade;
    }
    void IsRefillable(bool statusrefill){
        refillable = statusrefill;
    }
    void IsInk(bool statusink){
        inkstatus = statusink;
    }
    //getters
    string Brand(){
        return brand;
    }
    string Shade(){
        return shade;
    }
    bool Refillable(){
        return refillable;
    }
    bool Ink(){
        return inkstatus;
    }
    //writing method
    void writingmethod(bool inkstatus){
        if(inkstatus) cout<<"Writing with "<<shade<<" ink...."<<endl;
        else cout<<"Can't write! Marker is out of ink."<<endl;
    }
    //refill method
    void refillmethod(bool refillable){
        if(refillable){
            cout<<"\nRefilled with "<<shade<<" ink."<<endl;
            inkstatus = true;
        }
        else cout<<"\nCan't add more ink."<<endl;
    }
};

int main(){
    BoardMarker marker;

    marker.setbrand("Dollar");
    marker.setshade("Red");
    marker.IsRefillable(true);
    marker.IsInk(true);

    cout<<"The brand of the marker is "<<marker.Brand()<<endl;
    cout<<"The ink of the marker is "<<marker.Shade()<<endl;
    cout<<"Refillable: "<<(marker.Refillable()?"yes":"no")<<endl;
    cout<<"Ink Status: "<<(marker.Ink()?"full":"empty")<<endl;

    marker.refillmethod(true);
    marker.writingmethod(true);
}
