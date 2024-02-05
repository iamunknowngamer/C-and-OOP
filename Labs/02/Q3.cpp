/* 
Name: Syed Saif ur Rehman Shah
Roll number: 23k-0032
*/

#include <iostream>
using namespace std;

bool findSubset(int arr[], int n, int target){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target) return true;
        }
    }
    return false;
}

int main(){
    int n=5;
    int arr[n] = {1,2,3,4,5};
    int target = 9;
    if(findSubset(arr,n,target)) cout<<"Subset found";
    else cout<<"Subset not found";
}
