#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int nums[n] = {2,7,11,15};
    int target = 9;
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                cout << "The indices of the array that sum up to "<< target<< " are " << i << " and " << j <<"."; 
            }
        }
    }
}
