#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int k){
    int l = 0; 
    int r = nums.size() - 1;

    while (l<=r){
        int mid = (l+r) / 2;
        if (nums[mid] == k){
            return mid;
        }
        if ( k <= nums[r] && nums[mid] > nums[r] ){
            l = mid + 1;
        }else if ( k <= nums[r] && nums[mid] < nums[r] ) {
            if (k > nums[mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }else if (k >= nums[r] && nums[mid] < nums[r]  ){
            r = mid - 1;
        }else{
            if (k > nums[mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
    }

    return -1;
}


int main(){
    vector<int> nums = {3,1};
    int k = 1;
    int result = search(nums, k); //4
    cout << result <<endl;
    return 0;
}