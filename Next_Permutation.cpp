#include <iostream>
#include <vector>

using namespace std;

void nextPermutation(vector<int>& nums){
    if (nums[1]>nums[2]){
        swap(nums[0],nums[2]);
    };
    
    for (int i:nums){
        cout<<i<<endl;
    };

    if(nums[1]<nums[2]){
        swap(nums[1], nums[2]);
    };

    for (int i:nums){
        cout<<i<<endl;
    };

};

int main (){
    vector<int> nums;
    nums = {1,3,2};
    nextPermutation(nums);
    return 0;
}