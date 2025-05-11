#include <iostream>
#include <stack>
#include <vector>

using namespace std;    

int carFleet(int target, vector<int>& position, vector<int>& speed){
    //Positions ->  {2,4,5,3} || Speed -> {4,2,1,2}
    vector<pair<int,int>> speedandpos;
    for (int i=0; i<position.size(); i++){
        //pos[0] = 2 || speed[0] ->4
        speedandpos.push_back({position[i], speed[i]});
    }
    //End of this loop: {{2,4}, {4,2}, {5,1}, {3,2}}
    int result;
    sort(speedandpos.rbegin(), speedandpos.rend());
     //Speedandpos-> {{5,1}, {4,2}, {3,2}, {2,4}}
     stack<double> stack;
    for (int i = 0; i<speedandpos.size(); i++){
        //{5,1}
        double time;
        time = (double)(target - speedandpos[i].first)/speedandpos[i].second;
        double top = 0;
        if (!(stack.empty())){
            top = stack.top();
        }

        if (time>top){
            stack.push(time);
        }
    }
    return stack.size();
}

int main(){
    vector<int> pos = {4,1,0,7};
    vector<int> speed = {2,2,1,1};
    int target = 10;
    int result = carFleet(target, pos, speed);
    cout << result << endl;
    return 0;
}