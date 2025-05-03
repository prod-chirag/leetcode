#include <iostream>
#include <vector>

using namespace std;

bool hasDuplicate(vector<int>& nums){
    int check = 0;
    for (int i=0; i<nums.size(); i++){
            int target = nums[i];
            for (int j=0; j<nums.size(); j++){
                if (nums[j]==target){
                    check = check + 1;
                    if (check==2){
                        return true;
                    };
                }
            }; 
            check = 0;
        };
    return false;   
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    hasDuplicate(nums);
    return 1;
}