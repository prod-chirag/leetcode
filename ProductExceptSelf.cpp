#include <iostream>
#include <vector>

using namespace std;

vector<int> Product(vector<int>& nums){
    //{1,2,3,4,5,6}
    int temp;
    vector<int> result; 
    for (int i=0; i<nums.size(); i++){
        //1
        for (int j=0; j<nums.size(); j++){
            if (i!=j){
                temp = temp * nums[j];
            }
        }
        result.push_back(temp);
        temp = 1;
    }
    return result;
}

int main(){
    vector<int> nums = {1,2,4,6};
    vector<int> result = Product(nums);
    for (int i:result){
        cout << i << endl;
    }
    return 0;
}