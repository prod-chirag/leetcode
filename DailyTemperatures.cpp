#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temps){
    //{30,38,30,36,35,40,28}
    vector<int> result(temps.size(), 0);
    stack<pair<int, int>> stack;
    for (int i=0; i<temps.size(); i++){
        //30
       int t = temps[i];
       //30 won't pass this
       //38 will pass this
       while(!stack.empty() && t>stack.top().first){
        //Run as long as the stack isn't empty && Number is Greater than previous number
        auto pair = stack.top(); //Store the top value
        stack.pop(); //Remove the top value
        result[pair.second] = i - pair.second; //Push that index - pair's index to result at that index
       }
       stack.push({t,i});//Add values if it doesn't match above condition (empty or greater)
    }
    return result;
}

int main(){
    vector <int> temps = {30,38,30,36,35,40,28};
    vector<int> result = dailyTemperatures(temps);
    for (int i:result){
        cout<<i<<endl;
    }
    return 0;
}