#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> group_anagrams(vector<string> strs){
    unordered_map<string, vector<string>> result;

    for (const auto& s:strs){
        //s = cat
        vector<int> count(26,0);
        for (char c:s){
            //c = c
            count[c - 'a']++;
            //cout = (0,0,1,0,0,0....)
        }
        //count(1,0,1,0,0,0....1(t),0,0,0)
        string key = to_string(count[0]);
        for (int i; i<26; i++){
                key = key + ',' + to_string(count[i]);
        }//key for cat = 1,0,1,.....1,0,0,0
        result[key].push_back(s); // something like - (1,0,1,0....1,0,0,0):{cat}
                                  // same key for tac - (1,0,1,0....1,0,0,0):{cat},{tac}
    };
    vector<vector<string>> toreturn;

    for(const auto& pair : result){
        toreturn.push_back(pair.second);//{{cat},{tac}}, {{},{}}, ...
    }
    return toreturn;
}

int main(){
    vector<string> strs = {"cat", "act", "dog", "god"};
    group_anagrams(strs);
    return 0;
}