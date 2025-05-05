#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<string>> groupAnagram(vector<string> strs){
    unordered_map<string, vector<string>> hash;
    vector<vector<string>> result;
    for (string s:strs){
        string sortedS = s;
        sort(sortedS.begin(), sortedS.end());
        hash[sortedS].push_back(s);
    }
    for (const auto& pair:hash){
        result.push_back(pair.second);
    }
    return result;
}

int main(){
    vector<string> check = {"cat", "tac", "act", "that", "hatt", "dog", "god"};
    vector<vector<string>> result = groupAnagram(check);
    int i = 1;
    for (vector<string> s : result){
        cout << "Pair "<< i <<":"<< endl;
        i= i + 1;
        vector<string> temp = s;
        for (string ss:temp){
            cout<<ss<<endl;
        };
    };
    return 0;
}