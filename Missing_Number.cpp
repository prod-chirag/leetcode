#include <iostream>
#include <vector>

using namespace std;

int Missing_Number(vector<int> nums){
    int size = nums.size();
    int strike=0;

    for (int k=1; k<=size; k++){

        for (int i=0; i < size; i++){
        if (nums[i] != k){
            strike = strike + 1;
        }else{
            break;
            strike = 0;
        };
    };
        if(strike >= size){
            return k;
        }
    };

    return -1;
};


int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int result = Missing_Number(nums);
    cout << result <<endl;
    return 0;
}