#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s){
    // "[{()}]";
    unordered_map<char, char> map = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    stack<char> characters;

    for (char c:s){
        //]
        if (map.count(c)){
            if (!characters.empty() && characters.top()==map[c]){
                characters.pop();
            }else{
                return false;
            }
        }else{
            characters.push(c);
        }
    }
    return characters.empty();
}

int main(){
    string s = "[{()}]";
    bool result = isValid(s);
    cout << "Result: " << result << endl;
    return 0;
}