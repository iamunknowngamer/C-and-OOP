#include <iostream>
using namespace std;

bool isPrime(int n){
    
    for(int i=2; i*i< n; i++){
        if (!(n%i)) return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << (isPrime(n) ? "It is a prime number" : "It is not a prime number");
}
