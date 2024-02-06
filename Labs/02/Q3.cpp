/* 
Name: Syed Saif ur Rehman Shah
Roll number: 23k-0032
*/

#include <iostream>
using namespace std;

bool findSubset(int arr[], int n, int target,int i, int j){
    if(i==n) return false;
    if(j>n-1){
        i++;
        j=i+1;
    }
    if(arr[i]+arr[j]==target) return true;
    else return findSubset(arr,n,target,i,j+1);
}

int main(){
    int n=5;
    int arr[n] = {1,2,3,4,5};
    int target = 7;
    if(findSubset(arr,n,target,0,1)) cout<<"Subset found";
    else cout<<"Subset not found";
}
