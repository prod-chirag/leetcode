#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> nums){
    //{-1,0,1,2,-1,-4}
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    //{-4, -1, -1, 0, 1, 2}
    for (int i =0; i<nums.size(); i++){
        if (nums[i - 1]!=nums[i]){
            int l = 0;
            int r = nums.size() - 1;
            int check = nums[i]; //-4 (a)
            int to_find = 0 - check;
                //-4
                while (l<r){
                    if (nums[l] == check){
                    l++;
                    };
                    if (nums[r] == check){
                        --r;
                    };
                    if ((nums[l] + nums[r]) > to_find ){
                        --r;
                    }
                    if ((nums[l] + nums[r]) < to_find ){
                        l++;
                    }
                    if ((nums[l] + nums[r]) == to_find){
                        result.push_back({l,r,i});
                        l=r;
                    }
                }
        }

    }
    return result;
}

int main(){
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