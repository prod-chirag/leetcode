#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int LongestSubstring(string s){
    int max = 0;
    int l=0;
    int r=0;
    unordered_set<char> set;
    while(r<s.size()){
        if(!set.count(s[r])){
            set.insert(s[r]);
            if ((r-l+1)>max){
                max = r - l + 1;
            }
            r++;
        }else{
            set.erase(s[l]);
            l++;
        }
    }
    return max;
}


int main(){
    string s = " ";
    int result = LongestSubstring(s);
    cout << result << endl;
}