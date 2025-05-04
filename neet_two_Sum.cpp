#include <iostream>
#include <vector>


using namespace std;


vector<int> two_sum (vector<int> num, int target){
    unordered_map<int, int> hash;
    vector<int> result;
    for (int i=0; i<num.size(); i++){
        hash[num[i]] = i;
    }
    for (int i=0; i <num.size(); i++){
        int to_find = target - num[i];
        if(hash.count(to_find)){
            result.push_back(i);
            result.push_back(hash[to_find]);
            break;
        }
    }
    return result;
};

int main(){
    int target = 9;
    vector<int> num = {1,2,2,4,5,6};
    vector<int> result = two_sum(num, target);
    for (int i:result){
        cout << i << endl;
    }
    return 0;
}