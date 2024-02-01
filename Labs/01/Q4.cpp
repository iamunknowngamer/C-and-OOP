#include <iostream>
using namespace std;
int main(){
    int n = 9, max1 = 0,max2 = 0, count =0;
    int height[n] = {1,8,6,2,5,4,8,3,7};
    int area;
    for(int i=0; i<n; i++){
        if(max1 == height[i]) height[i] = 0;
        if(height[i] > max1) max1 = height[i];
    }
    for(int j=n-1; j>0; j--){ 
        if(height[j] > max2) max2 = height[j];
        }        
    area = max1*max2;
    cout<< area;
}
