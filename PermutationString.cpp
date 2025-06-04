#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

bool checkInclusion(string s1, string s2){
    unordered_map<char, int> map;
    vector<int> count(26,0);
    for (char c:s1){
        count[c - 'a']++;
    }
    string key1 = to_string(count[0]);
    for (int i=1; i<26; i++){
        key1 = key1 + to_string(count[i]);
    }
    int l =0 ;
    int r = s1.size() - 1;
    while (r<s2.size()){
        vector<int> count2(26,0);
        //lecabbe
        string sub = s2.substr(l, s1.size());
        //lec
        for (char c:sub){
            count2[c - 'a']++;
        }
        string key2 = to_string(count2[0]);
        for (int i=1; i<26; i++){
            key2 = key2 + to_string(count2[i]);
        }

        if(key1 == key2){
            return true;
        }else{
            l++;
            r++;
        }
    }

    return false;
}


int main(){
    string s1 = "abc";
    string s2 = "lecabbe";
    bool result = checkInclusion(s1, s2);
    cout << boolalpha;
    cout << result << endl;
    return 0;
}