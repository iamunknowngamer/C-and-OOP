/*
Name: Syed Saif ur Rehman Shah
Roll No: 23k-0032
*/

#include <iostream>
using namespace std;

class WaterBottle{
    string company;
    string color;
    float litres;
    float millilitres;

public:
void setCompany(string companyName){
    company = companyName;
}
void setColor(string colour){
    color = colour;
}
void setLiters(float Liter){
    litres = Liter;
}
void setMililiters(float mls){
    millilitres = mls; 
} 

string getcompany(){
    return company;
}
string getcolor(){
    return color;
}
float getlitres(){
    return litres;
}
float getmls(){
    return millilitres;
}

void update(float ml){
    float update_litres, update_ml;
    update_litres = ((getlitres()*1000) - ml)/1000;
    update_ml = getmls() - ml;
    cout<<"Litres after consumption: "<<update_litres<<endl;
    cout<<"Milli Litres after consumption: "<<update_ml<<endl;
}

};

int main(){

    WaterBottle mybottle;
    mybottle.setCompany("PepsiCola");
    mybottle.setColor("Black");
    mybottle.setLiters(1.5);
    mybottle.setMililiters(1500);

    float ml;
    cout<<"Company Name: "<<mybottle.getcompany()<<endl;
    cout<<"Color: "<<mybottle.getcolor()<<endl;
    cout<<"Capacity in litres: "<<mybottle.getlitres()<<" L"<<endl;
    cout<<"Capacity in milli litres: "<<mybottle.getmls()<<" mL"<<endl;
    cout<<"Enter the amount of drink consumed(ml): "; cin>>ml;
    
    mybottle.update(ml);
}

