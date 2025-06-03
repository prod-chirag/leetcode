#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices){
    int max =0;
    //7,6,4,3,1
    int l=0;
    int r=1;

    while(r < prices.size()){
        if(prices[l] > prices[r]){
            l = r;
            r++;
        }else{
            if ((prices[r] - prices[l]) > max){
                max = prices[r] - prices[l];
            }
            r++;
        }
    }
    return max;
}

int main(){
    vector<int> prices = {2,1,2,1,0,1,2};
    int result = maxProfit(prices);
    cout << result << endl;
    return 0;
}