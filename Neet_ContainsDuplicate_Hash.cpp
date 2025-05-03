#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDuplicate(vector<int>& nums){
    unordered_set<int> seen;
    for (int i:nums){
        if (seen.count(i)){
            return true;
        }else{
            seen.insert(i);
        }
    }
    return false;
}


int main (){
    vector<int> nums = {1,2,3,4,5,1,2};
    bool result = hasDuplicate(nums);
    cout << result << endl;
    return 0;
}