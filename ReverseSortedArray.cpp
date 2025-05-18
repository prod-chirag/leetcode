#include <iostream>
#include <vector>

using namespace std;

int minimum(vector<int> nums){
    //3,4,5,6,1,2
    int min = nums[0]; //3
    int l = 0; //3
    int r = nums.size() - 1; //2
    while (l<=r){
        int mid = (l+r)/2; //5
        if (nums[l] < nums[r] ){
            if (nums[l] < min){
                min = nums[l];
            };
            break;
        }
        if (nums[mid] < min){
            min = nums[mid];
        }
        if (nums[mid] >= nums[l]){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        
    }
    return min;
}

int main(){
    vector<int> nums = {3,4,5,6,1,2};
    int result = minimum(nums);
    cout << result <<endl;
    return 0;
}