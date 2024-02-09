#include <iostream>
#include <string>
using namespace std;
class water_bottle{
private:
    string company;
    string color;
    double liters;
    double ml;

public:
    void setCompany(const string &newCompany){
        company =newCompany;
    }
    void setColor(const string &newColor){
        color = newColor;
    }
    void setLiters(double newLitters){
        liters = newLitters;
        ml_to_l();
    }
    void set_ml(double newML){
        ml = newML;
        l_to_ml();
    }
    string getCompany() const{
        return company;
    }
    string getColor() const{
        return color;
    }
    double cliters() const{
        return liters;
    }
    double cml() const{
        return ml;
    }

    void consumeWater(double mlc){
        ml -= mlc;
        l_to_ml();
    }

private:

    void ml_to_l() {
        ml = liters * 1000;
    }

    void l_to_ml() {
        liters = ml / 1000;
    }
};

int main() {
    water_bottle myBottle;

    myBottle.setCompany("ABC Company");
    myBottle.setColor("Blue");
    myBottle.setLiters(1.5); 

    cout << "Company: " << myBottle.getCompany() << endl;
    cout << "Color: " << myBottle.getColor() << endl;
    cout << "Capacity in Liters: " << myBottle.cliters() << " L" << endl;
    cout << "Capacity in Milliliters: " << myBottle.cml() << " mL" << endl;

    double mlc;
    cout << "Enter the amount of water consumed in milliliters: ";
    cin >> mlc;

    myBottle.consumeWater(mlc);

    cout << "Updated Capacity in Liters: " << myBottle.cliters() << " L" << endl;
    cout << "Updated Capacity in Milliliters: " << myBottle.cml() << " mL" << endl;

    return 0;
}

