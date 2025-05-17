#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<pair<int, int>> stack;
    int maxArea = 0;
    //{2,1,5,2,6,3}
    for (int i=0; i<heights.size(); i++){
        //heights[i] -> 2 
        int start = i;
        while (!stack.empty() && stack.top().second > heights[i]){
            int topI = stack.top().first;
            int topN = stack.top().second;
            maxArea = max(maxArea, topN * (i - topI) );
            start = topI;
            stack.pop();
        }
        stack.push({start, heights[i]});
    }

    while (!stack.empty()){
        int numI = stack.top().first;
        int numN = stack.top().second;
        maxArea = max (maxArea,  numN * ( static_cast<int>(heights.size())  - numI) );
        stack.pop();
    }
    return maxArea;
}

int main(){
    vector<int> histogram = {2,1,5,6,2,3};
    int result = largestRectangleArea(histogram);
    cout << result << endl;
    return 0;
}