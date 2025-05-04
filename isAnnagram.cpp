#include <iostream>

using namespace std;

bool isAnnagram(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool result;
    for (int i=0; i<s.length(); i++){
        if (static_cast<int>(s[i]) == static_cast<int>(t[i])){
            result = true;
        }else{
            result=false;
            return result;
        }
    }
    return result;
};


int main(){
    string s = "chirag";
    string t= "garhic";
    bool result = isAnnagram(s, t);
    cout << result << endl;
    return 0;
}