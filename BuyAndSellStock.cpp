#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices){
    int max = 0;
    //10,1,5,6,7,1
    int l = 0;
    int r = 1;
    for ( int i=0; i<prices.size(); i++){
        //i = 0;
        if(prices[l] >= prices[r] ){
            l++;
            r++;
        }else{
            if (prices[r] - prices[l] > max){
                max =  prices[r] - prices[l];
                r++;
            }else{
                r ++;
            }
        }
    }
    
    return max;
}

int main(){
    vector<int> prices = {10,1,5,6,1,7};
    int result = maxProfit(prices);
    cout << result << endl;
    return 0;
}