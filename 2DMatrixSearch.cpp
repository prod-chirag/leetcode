#include <iostream>
#include <vector>

using namespace std;

bool search(vector<vector<int>>& nums, int target){
    int mainLeft = 0;
    int mainRight = nums.size() - 1;
    while(mainLeft <= mainRight){
        int mainMid = (mainLeft + mainRight)/2;
        int l = 0;
        int r=nums[mainMid].size() - 1;
        bool check = false;
        while (l<=r){
            int mid = l + ((r-l)/2);
            if (target == nums[mainMid][mid]){
                return true;
            }else if (target > nums[mainMid][mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if (target > nums[mainMid][nums[mainMid].size() -1]){
            mainLeft = mainMid + 1;
        }else{
            mainRight = mainMid - 1;
        }
    }
    return false;
}


int main() {
    vector<vector<int>> nums = {{1,2,4,8}, {10,11,12,13}, {14,20,30,40}};
    int target = 35;
    bool result = search(nums, target);
    cout << result << endl;
    return 0;
}