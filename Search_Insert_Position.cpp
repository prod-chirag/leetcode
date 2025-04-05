#include <iostream>
#include <vector>

using namespace std;

int Search_Insert_Position(vector<int> nums, int target){
    int k=0;
    for (int i=0; i<nums.size(); i++){
        if (nums[i]==target){
            return i;
        }else if(nums[k]<target){
            k++;
        }
    };
    return k;
};

int main(){
    vector<int> nums = {1,2,3,4,6,7,8};
    int target = 5;
    int result = Search_Insert_Position(nums, target);

    cout<<result<<endl;
    return 0;
}