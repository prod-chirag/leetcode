#include <iostream>
#include <vector>


using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> result;
    //{1,3,4,6,8,11}
    int l = 0;
    int r = nums.size() - 1;

    for (int i=0; i<nums.size(); i++){
        if (nums[l] + nums[r] == target){
            return {l+1, r+1};
        }

        if (nums[l] + nums[r] > target){
            r = r - 1;
        }

        if (nums[l] + nums[r] < target){
            l = l + 1;
        }
    }
    return result;
}

int main(){
    vector<int> nums = {1,2,3,4};
    int target = 3;
    vector<int> result = twoSum(nums, target);
    for (int i:result){
        cout << i << endl;
    }
    return 0;
}
