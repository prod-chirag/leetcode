#include <iostream>
#include <vector>

using namespace std;

vector<int> RemoveDuplicates(vector<int>& nums, int val){
        int k = 0;
        for (int i=1; i<nums.size(); i++){
            if (nums[i]!= nums[k]){
                k++;
                nums[k] = nums[i];
            }
        }
    nums.resize(k+1);
    return nums;
};

int main(){
    cout <<"Hey from main"<<endl;;
    vector<int> nums={1,2,2,3,3,4,4,4,4,4,5,5,5,5,6,7,7,7,7};
    int val = 4;
    vector<int> result = RemoveDuplicates(nums, val);
    int k = result.size();
    cout<<"Size: "<<k<<endl;
    cout<<"Elements: " <<endl;
    for (int i:result){
        cout<< i <<endl;
    };
    return 0;
}