// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
#include <string>
using namespace std;


class Restaurant{
    string dinerName, location, items[3];
    float prices[3];
    int codes[15];
    
    public:

    static const int totalItems = 3;
    Restaurant(string temp, string l) : dinerName(temp), location(l){}
    
    void setItemsPrices(string item1, string item2, string item3, float price1, float price2, float price3){
        items[0] = item1;
        items[1] = item2;
        items[2] = item3;
        prices[0] = price1;
        prices[1] = price2;
        prices[2] = price3;
    }
    void displayMenu(){
        for(int i=0; i<totalItems; i++) cout<<"Item "<<i+1<<" : "<<items[i]<<endl;
    }
    float calculateBill(){
        return 1; 
    }
    float applyDiscount(){
        return 1;
    }
};

class BOGO_Coupon{
    string R_name, couponCode;
    float startTime, endTime;
    
    public:

    BOGO_Coupon(){}
    BOGO_Coupon(string name, float start, float end, string code): 
    R_name(name), startTime(start), 
    endTime(end), couponCode(code){}

    bool isValidTime(float currentTime){
        return startTime < currentTime && currentTime < endTime;
    }
    string getDinerCode(){
        return couponCode;
    }
    string getDiscountCode(){
        return R_name;
    }
};

class Customer{
    string customerName, redeemedDiscounts[15];
    BOGO_Coupon discounts[15];
    int customerAge, contactNumber;
    
public:

    Customer(){}
    Customer(string name, int age, int number): 
    customerName(name), customerAge(age), contactNumber(number){}

    int discountCounter = 0;
    void accumulateCoupon(){
        string R_name, couponCode;
        float validStart, validEnd;
        cout<<"Enter restaurent name: "; cin.ignore(); getline(cin, R_name);
        cout<<"Enter coupon code: "; cin>>couponCode;
        cout<<"Enter valid start time: "; cin>>validStart;
        cout<<"Enter valid end time: "; cin>>validEnd;

        discounts[discountCounter] = BOGO_Coupon(R_name, validStart, validEnd, couponCode);
        if(isValidDiscount(discounts[discountCounter], couponCode) && redeemDiscount(R_name)){
            cout<<"Coupon Redeemed."<<endl;
            discountCounter++;
        }
    }
    bool isValidDiscount(BOGO_Coupon &offer, string discount){
        return discount.substr(0, 2) == offer.getDinerCode().substr(0, 2);
    }
    bool redeemDiscount(string redeemDiscount){
        for(int i=0; i<discountCounter; i++){
            if(redeemDiscount == redeemedDiscounts[i]) return false;
        }
        redeemedDiscounts[discountCounter] = redeemDiscount;
        return true;
    }
};

int main(){

    cout<<"[Credits: Syed Saif ur Rehman Shah (23k-0032)]"<<endl<<endl;
    Restaurant d1("Delicious Delight", "Main Street"), d2("Tasty Treats", "Downtown Plaza");
    d1.setItemsPrices("Spaghetti", "Pizza", "Salad", 12.5, 18.75, 8.99);
    d2.setItemsPrices("Burger", "Sushi", "Ice Cream", 9.99, 22.0, 5.5);

    cout<<"Menu of Pixel Bites: "<<endl;
    d1.displayMenu();
    cout<<"Menu of Food Haven: "<<endl;
    d2.displayMenu();

    Customer c1, c2;
    c1 = Customer("Saif", 25, 12345);
    c2 = Customer("Shah", 30, 67890);
    c1.accumulateCoupon();
    c2.accumulateCoupon();
    return 0;
}
