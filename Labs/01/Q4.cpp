#include <iostream>
using namespace std;
int main(){
    int n = 9, max1 = 0,max2 = 0;
    int height[] = {1,8,6,2,5,4,8,3,7};
    int area;
    for(int i=0; i<n; i++){
        if(height[i] > max1) max1 = height[i];
        for(int j=n-1; j>n/2; j--){
            if(height[j] > max2){ 
                max2 = height[j];
                break;
            }
        if(max1 = max2) area = max1*max2;
        max1--;
        }
    }
    cout<< area;
}
