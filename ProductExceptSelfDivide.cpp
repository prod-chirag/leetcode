#include <iostream>
#include <vector>

using namespace std;

vector<int> Product(vector<int>& nums){
    //{1,2,3,4,5,6}
    int total = 1;
    vector<int> result; 
    for (int i:nums){
        total = total * i;
    }
    for (int i:nums){
        result.push_back(total/i);
    }
    return result;
}

int main(){
    vector<int> nums = {1,2,4,6, 0};
    vector<int> result = Product(nums);
    for (int i:result){
        cout << i << endl;
    }
    return 0;
}