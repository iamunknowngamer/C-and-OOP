// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;

class ValidateString{
    string check;

    public:
    ValidateString(void) {}
    ValidateString(string check): check(check) {}

    const void isValid(){
        bool flag;
        for (int i=0; i<check.size(); i++){
            if( (check[i] >= 'a' && check[i] <= 'z') || (check[i] >= 'A' && check[i] <= 'Z') || check[i]==' ' ){
                flag = true;
            }
            else {break; flag=false;}
        }     
        if(flag) cout<<"String is valid"<<endl;
        else cout<<"String is not valid"<<endl;
    }
};

int main(){
    ValidateString string[2];
    string[0] = ValidateString("Saif ur Rehman");
    string[0].isValid();
    string[1] = ValidateString("23k-0032");
    string[1].isValid();
}
