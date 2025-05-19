#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> threeSum (vector<int> nums){
    //-1, 0, 1, 2, -1, -4
    vector<vector<int>> result;
    sort (nums.begin(), nums.end());
    for (int i = 0; i<nums.size(); i++ ){
        //nums[i] -> -4;
        if(nums[i]>0) break;

        if (i>0 && nums[i] == nums[i-1]) continue;
        int l= i + 1;
        int r=nums.size() - 1;
        
        while (l<r){
            int sum = nums[i] + nums[l] + nums[r];
            if (sum > 0){
                --r;
            }else if (sum < 0){
                l++;
            }else{
                result.push_back({nums[i], nums[l], nums[r]});
                l++;
                --r;
                while (l<r && nums[l] == nums[l-1]){
                    l++;
                }
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (const auto& vector: result){
        for (int i:vector){
            cout << i <<endl;
        }
        cout << "----------" << endl;
    }
    return 0;
}