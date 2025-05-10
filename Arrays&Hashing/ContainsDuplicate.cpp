#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums){
    //{1,2,3,4,5,1,6,7,8}
    unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
}

int main(){
    
    vector<int> nums = {1,2,3,4,5,1,6,7,8};

    bool result = containsDuplicate (nums);

    cout << result << endl;
    return 0;
}