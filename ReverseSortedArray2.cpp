
#include <iostream>
#include <vector>

using namespace std;

int minimum(vector<int> nums){
    //3,4,5,6,1,2
    int min = nums[0]; //3
    int l = 0; //3
    int r = nums.size() - 1; //2

    while(l<r){
        int mid = (l+r)/2;
        if(nums[mid] > nums[r]){
            l = mid + 1;
        }else{
            r = mid; 
        }
    }
    return nums[l];
}

int main(){
    vector<int> nums = {2,1};
    int result = minimum(nums);
    cout << result <<endl;
    return 0;
}