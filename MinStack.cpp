#include <iostream>
#include <stack>

using namespace std;


class MinStack {
private: 
    //stack<int> stk;

public:
    stack<int> stk;
    stack<int> minimum;
    int min;
    MinStack() {}
    
    void push(int val) {
        if (minimum.empty()){
            minimum.push(val);
        }else{
            if (val<=minimum.top()){
                minimum.push(val);
            }
        }
        stk.push(val);
    }
    
    void pop() {
        if (stk.top() == minimum.top()){
            minimum.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};

int main(){
    MinStack chirag = MinStack();
    chirag.push(-2);
    chirag.push(-2);
    chirag.push(-3);
    chirag.push(-3);
    int result1 = chirag.getMin();
    chirag.pop();
    int result2 = chirag.getMin();
    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}