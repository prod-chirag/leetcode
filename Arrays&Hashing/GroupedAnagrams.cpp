#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

vector<vector<string>> groupedAnagrams(vector<string>& strs){
    //{"act","pots","tops","cat","stop","hat"}
    vector<vector<string>> result;
    unordered_map <string, vector<string>> map;
    for (string s : strs){
        //act
        vector<int> count(26, 0);
        for (char c:s){
            count[c - 'a']++;
        }
        //
        string key = to_string(count[0]);
        for (int j = 1; j<26; j++){
            key = key + ',' + to_string(count[j]);
        }
        map[key].push_back(s);
    }

    for (const auto& pair: map){
        result.push_back(pair.second);
    }
    return result;
}

int main(){
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> result = groupedAnagrams(strs);
    for (vector<string> str : result){
        for(string s:str){
            cout << s << endl;
        }
        cout << "---------------" << endl;
    }
    return 0;
}