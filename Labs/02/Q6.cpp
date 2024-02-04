#include <iostream>
using namespace std;

int LCM(int a, int b){
    int n=1;
    if(a==b) return a;
    else if(a>b) return LCM(a, b*n++);
    else return LCM(a*n++, b);
    
}

int GCD(int a,int b){   
    if(b%a == 0) return a;
    else return GCD(b--, a%b);
    if(a%b == 0) return b;
    else return GCD(a--, b%a);
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\nThe GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<".";
    cout<<"\nThe LCM of "<<a<<" and "<<b<<" is "<<LCM(a,b)<<".";
}
