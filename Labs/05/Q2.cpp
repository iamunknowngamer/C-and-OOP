// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;

class LoanHelper{
    const float rate;
    float amount;
    int months;

    public:
    LoanHelper(float rate, float amount, int months): rate(rate) {
        this->amount=amount;
        this->months=months;
    }

    void calculate(){
        float interest = amount*rate/months;
        cout<<"You have to pay "<<interest+amount/months<<" every month for "<<months<<" months to repay our loan.";
    } 
};

int main(){
    LoanHelper person1(0.3,1000.0,6);
    person1.calculate();
}
