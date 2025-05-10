#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> nums, int k){
    // {1,2,3,4,5,6,7,8}
    unordered_map<int, int> check;

    for (int i = 0; i< nums.size(); i++){
        //1
        int to_find = k - nums[i];
        if(check.find(to_find) != check.end()){
            return {check[to_find], i};
        };
        check.insert({nums[i], i});
    }
    return {};
}


int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    int k = 15;    
    vector<int> result = twoSum(nums, k);
    for (int i : result){
        cout << i << endl;
    }
    return 0;
}