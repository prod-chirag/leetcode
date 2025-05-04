#include <iostream>
#include <unordered_set>

using namespace std;

bool isAnnagram(string s, string t){
    unordered_map<char, int> s_map;
    unordered_map<char, int> t_map;

    if (s.length() != t.length()){
        return false;
    }
    for (int i=0; i<s.length(); i++){
        s_map[s[i]] = s_map[s[i]] + 1;
        t_map[t[i]] = t_map[t[i]] + 1;
    }

    for (const auto& i : s_map){
        if(t_map[i.first] != i.second){
            return false;
        }
    }
    return true;
};


int main(){
    string s = "chirag";
    string t= "garhib";
    bool result = isAnnagram(s, t);
    cout << result << endl;
    return 0;
}