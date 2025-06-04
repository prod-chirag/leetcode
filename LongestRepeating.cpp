#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int LongestRepeating(string s, int replacable){
    //AAAABA
    int max=0;
    unordered_map<int, int> map;
    int l=0;
    int r=0;
    int currentmax = 0;
    while(r<s.size()){
        map[s[r]]++;
        int lengthOfWindow = (r - l) + 1;
        for (int i=65; i<91; i++){
            if (map[i] > currentmax){
                currentmax = map[i];
            }
        }

        if ((lengthOfWindow - currentmax) <= replacable){
            if (lengthOfWindow > max){
                max = lengthOfWindow;
            }
            r++;
        }else{
            map[s[l]]--;
            l++;
        }
    }
    return max;
}

int main (){
    string s = "AABABBA";
    int k = 0;
    int result = LongestRepeating(s, k);
    cout << result << endl;
}