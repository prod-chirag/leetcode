#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int evalRPN(vector<string> strs){
    //{"1","2","+","3","*","4","-"}
    stack<int> ops;
    for (string s:strs){
        // OPS -> 1 2
        //+
        if(s == "+" || s== "-" || s== "/" || s == "*"){
            int a = ops.top(); //2
            ops.pop();
            int b = ops.top(); //1
            ops.pop();
            int result;
            if (s == "+"){
                result = b + a;
            }else if (s == "-"){
                result = b - a;
            }else if (s=="*"){
                result = b * a;
            }else if (s=="/"){
                result = b /a;
            }
            ops.push(result);
        }else{
            ops.push(stoi(s));
        }
    }
    return ops.top();  
}

int main(){
    vector<string> strs = {"1","2","+","3","*","4","-"};
    int result = evalRPN(strs);
    cout << result << endl;
    return 0;
}