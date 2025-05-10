#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longestConsecutive(vector<int>& nums){
    if (nums.empty()){
        return 0;
    }
    unordered_set<int> check;
    int result = 1;
    int count = 1;
    // nums-> {1,2,50,60,4,5,9,8,7,3};
    for (int i: nums){
        //1
        check.insert(i);
    }

    //check -> {3,7,8,9,4,5,60,50,2,1}
    for (int i:check){
        //1
        if(!check.count(i-1)){//If 1 - 1 = 0  DOESNT exist (meaning it is the start of the sequence)
        count = 1;
            while(check.count(i+1)){ // Run a loop to find consecutive numbers without a break
                count = count + 1;
                i = i + 1;
            }
            if(result < count ){ //Check if the result stored is smaller than the latest sequence we counted
                    result = count; //If it is, make the result this sequence
            }
        }
    }
    return result;
}

int main (){
    vector<int> nums = {9,1,-3,2,4,8,3,-1,6,-2,-4,7};
    int result = longestConsecutive(nums);
    cout << result << endl;
    return 0;
}