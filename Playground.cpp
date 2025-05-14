#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum (vector<int> nums, int target){
    //{1,2,3,4,5,6}
    //target -> 11
    int l= 0;
    int r = nums.size() - 1;
    vector<int> comp_result;
    // for (int i = 0; i<nums.size(); i++){
    //     //i=0

    // }
    while (l<r){
        if ((nums[l] + nums[r]) < target ){
            l++;
        }
        if ((nums[l] + nums[r]) > target ){
            --r;
        }
        if ((nums[l] + nums[r]) == target){
            return {nums[l], nums[r]};
        };
    }
    return comp_result;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int target = 10;
    vector<int> result = twoSum(nums, target);
    for (int i:result){
        cout << i << endl;
    }
    return 0;
}