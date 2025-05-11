#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<pair<int, int>> stack;
    int largestArea;
    //{7,1,7,2,2,4}
    for (int i =0; i<heights.size(); i++){
        //7
        //1
        stack.push({i, heights[i] }); // 0 -> 7
        while (!(stack.empty()) && (stack.top().second > heights[i])){
            
        }
    }


}

int main(){
    vector<int> histogram = {7,1,7,2,2,4};
    int result = largestRectangleArea(histogram);
    cout << result << endl;
    return 0;
}