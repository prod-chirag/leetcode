#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> TopKFrequentElements(vector<int>& nums, int k){
    unordered_map<int, int> hash;
    //Nums as an array {1,2,3,4,5,5,5,5,6,6,7,7,7,7,7,7,8}
    for(int i: nums){
        hash[i] = hash[i] + 1; //Create a map with number(key) : count (value) //E.g. 1:1, .. 7:5, etc.
    }
    vector<vector<int>> freq(nums.size()+1);//Array size of original arr + 1

    for (const auto& pair:hash){
        freq[pair.second].push_back(pair.first);//When freq[pair.second(which is the count)], it automatically sorts the array.
                                                //As count of 1 (is index 1), count of 2 (is index 2), etc.
                                                //Push the COUNT first. So that 5(Count) : 1(Value), 2(Value)
                                                //So that the array remains a constant size
    }
    vector<int>result;
    for (int i=freq.size(); i>0; --i ){//Iterate from the back
        for (int n : freq[i]){ //Each may contain multiple values so iterate over (like Count 2: 7(value),5(value))
            result.push_back(n);
            if(result.size()==k){ //Stop when Top K found
                return result;
            }
        }
    }
    return result;
}


int main(){
    vector<int> nums = {1,2,3,4,5,5,5,5,6,6,7,7,7,7,7,7,8};
    int k = 2;
    vector<int> result = TopKFrequentElements(nums, k);
    for (int i : result){
        cout<<i<<endl;
    }
    return 0;
}