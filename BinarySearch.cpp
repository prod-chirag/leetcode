#include <iostream>
#include <vector>

using namespace std;

int Search ( vector<int>& nums, int target){
    //{-1,0,2,4,6,8}
    //TARGET -> 4
    int start = 0; //0
    int end = nums.size() - 1;//5

    while (start <= end){
        int mid = (start + end) / 2; // 3
        if (target == nums[mid]){
            return mid;
        }

        if ( target < nums[mid]){
            end = mid - 1;   
        }

        if (target > nums[mid]){
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {-1,0,2,4,6,8};
    int target = 8;
    int result = Search(nums, target);
    cout << result << endl;
    return 0;
}