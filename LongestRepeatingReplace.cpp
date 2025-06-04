#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int LongestRepeating(string s, int replacable){
    //  A   A   B    A   B   B    A
    int max=0;
    unordered_map<int, int> map;
    int l=0;
    int r=0;
    int currentmax = 0;
    while(r<s.size()){
        map[s[r]]++; // A -> 3 //B -> 2
        int lengthOfWindow = (r - l) + 1; // 5
        for (int i=65; i<91; i++){ 
            if (map[i] > currentmax){ //True for map[65] (A)
                currentmax = map[i]; //currentmax -> 3
            }
        }

        if ((lengthOfWindow - currentmax) <= replacable){ // 5 - 3 = 2 < 1 (False)
            if (lengthOfWindow > max){ //True
                max = lengthOfWindow; //max -> 4
            }
            r++; //r moves to  5th character
        }else{
            map[s[l]]--; //A -> 3-1 (2) 
            l++; //l moves to 2nd character
            map[s[r]] --;
        }
    }
    return max;
}

int main (){
    string s = "AAABABB";
    int k = 1;
    int result = LongestRepeating(s, k);
    cout << result << endl;
}