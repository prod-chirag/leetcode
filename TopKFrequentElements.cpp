#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> TopKFrequentElements(vector<int>& nums, int k ){
    unordered_map<int, int> hash; //To map each number to its count
    for (int i:nums){//Takes one element out of array //Say 1
            hash[i]++; //hash[1] = hash[1](0) + 1 (result: 1)
                                //Next: hash[1] = hash[1](1) + 1 (result: 2)
    }
    //End of this loop, a hash map is created containing numbers and their count
    vector<pair<int,int>> result; //Creat a pair array -> where {count, number} {{1,1},{3,3}}
    for (const auto& parts:hash){
        result.push_back({parts.second, parts.first});//Will look similar to {{1,1},{2,1}, {3,3} ...}
    };
    sort(result.rbegin(), result.rend()); //Sort the array in descending manner

    vector<int> toReturn; //Create a new array
    for(int i=0; i<k; i++){ //Limit by K
        toReturn.push_back(result[i].second); //push the second item(the number) 
    };
    return toReturn;
}

int main(){
    vector<int> nums = {1,1,1,1,2,3,3,3,3,4,4,4,4,5};
    int k = 2;
    vector<int> results = TopKFrequentElements(nums, k);
    for (int i:results){
        cout << i << endl;
    }
    return 0;
}