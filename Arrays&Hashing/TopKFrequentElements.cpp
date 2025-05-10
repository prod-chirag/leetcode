#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k){
    //{1,1,1,1,2,2,2,2,2,2,2,3,4,5,6};
    unordered_map<int, int> map;
    vector<int> result;
    for (int i: nums){
        //1
        map[i] = map[i] + 1;
    }
    //End of this loop i will get
    //1:4
    //2:5
    //3:1
    //4:1 and so on...

    //But i need the frequencies
    vector<vector<int>> frequencies(nums.size()-1);
    //So that i can have something like {{Numbers having freq 0}, {Numbers having freq 1}, {Numbers having freq 2}, .... {Numbers having freq 15}}
    for (const auto& pair : map){
        frequencies[pair.second].push_back(pair.first);
        //Inserting at INDEX(COUNT) which will be 1-15. Then, within that count, what values exist (pair.first)
    }
    //End of this I will get freq = {{}, {3,4,5,6}, {}, {}, {1}, {2} ....{}}
    //Meaning freq[5(the number that appears five times)] -> 2
    
    for (int i=nums.size() - 1; i>0; --i){//Running opposite loop to capture top K
        //j = 14
        //freq[14] may have multiple values so need to iterate
        for (int j =0; j<frequencies[i].size(); j++ ){
            result.push_back(frequencies[i][j]);

            if(result.size() == k){
                return result;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {1,1,1,1,2,2,2,2,2,2,2,3,4,5,6};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);
    for (int i: result){
        cout << i << endl;
    }
    return 0;

}