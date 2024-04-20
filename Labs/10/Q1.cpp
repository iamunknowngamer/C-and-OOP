#include<iostream>
using namespace std;

class Logo{

    string logo;

    public:
    Logo(string logo):logo(logo){}

    friend class Platform;
};
class Platform{
public:
    void display(Logo &obj){
        obj.logo = "Doge Coin";
        cout<<obj.logo;
    }
};
class Server{};

int main(){
    Logo logo("Blue Bird");
    Platform plat;
    plat.display(logo);
    return 0;
}
