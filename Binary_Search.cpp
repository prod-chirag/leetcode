#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> nums, int target){
    int start = 0;
    int end=nums.size() -1 ;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if (nums[mid]==target){
            return mid;
        }else if (nums[mid]>target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12};
    int target = 13;
    int result = BinarySearch(nums, target);
    cout<<result<<endl;
    return 0;
}
