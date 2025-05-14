#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> nums){
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    //{-4, -1, -1, 0, 1, 2}
    for (int i=0; i<nums.size(); i++){
        //Only process further if this isn't a duplicate item
        if( nums[i] != nums[i-1] ){
             //-4
            //now find b+c (which is -i)
            int target = - nums[i]; //(which is to say, find 4)
            int l = 0;
            int r= nums.size() - 1;
            while (l<r){
                
                if ((nums[l] + nums[r]) < target ){
                l++;
                }
                if ((nums[l] + nums[r]) > target ){
                    --r;
                }
                if ((nums[l] + nums[r]) == target){
                result.push_back({nums[l], nums[r], nums[i]});
                l = r + 1; 
                };
            }
        }
    }
    return result;
}

int main(){
    string input;
    cout << "Enter 5 numbers";
    cin >> input;

    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(nums);
    for (vector<int> res:result){
        for (int i : res){
            cout << i << endl;
        }
        cout << "----------------" << endl;
    }
    return 0;
}