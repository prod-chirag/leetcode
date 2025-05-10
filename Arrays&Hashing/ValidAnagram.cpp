#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isValidAnagram(string s, string t) {
    //part || tarp
    unordered_map<char, int> sCheck;
    unordered_map<char, int> tCheck;
    for(int i=0; i<s.size(); i++){
        sCheck[s[i]] = sCheck[s[i]] + 1; //Counting the number of times the character appears
        tCheck[t[i]] = tCheck[t[i]] + 1;
    }

    for (int j=0; j<s.size(); j++){
        //part
        // j=0;   s[j]-> s[0]-> p
        // sCheck[p] -> Count of number of P
        if(sCheck[s[j]] != tCheck[s[j]]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "part";
    string t = "tarp";

    bool result = isValidAnagram(s, t);

    cout << result << endl;
}