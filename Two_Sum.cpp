#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& num, int target){
    vector<int> result = {};
    for (int i=0; i<num.size(); i++){
        for (int j=0; j<num.size(); j++ ){
            if (i != j){
                int check = num[i] + num[j];    
                if (check == target ) {
                    result = {i, j};
                };
            };
        }
    };
    return result;
};

int main()
{   
    vector<int> num = {2,7,11,15,4};
    int target = 9;
    vector<int> result =  twoSum(num, target);
    for (int i:result){
        cout << i << endl;
    };
    return 0;
}