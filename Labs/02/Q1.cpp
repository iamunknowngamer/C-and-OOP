/* 
Name: Syed Saif ur Rehman Shah
Roll number: 23k-0032
*/

#include <iostream>
using namespace std;

int swap(int &a, int &b){
    if(a==b) return (a,b);
    else{
        int temp = a;
        a = b;
        b = temp;
    }
}

int main(){
    int a=5;
    int b=3;
    
    cout<< "Before Swap: a = "<<a<<", b = "<<b<<".";
    swap(a,b);
    cout<< "\nAfter Swap: a = "<<a<<", b = "<<b<<".";
}
