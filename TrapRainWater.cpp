#include <vector>
#include <iostream>

using namespace std;

int trap(vector<int> heights){
    int result;

    // {0,2,0,3,1,0,1,3,2,1}
    //Immediately right thhulo aayo bhane sakkihalyo
    //You wont trap water on the first and last block
    
    //Iterate over each number using L and R
    int l=0;
    int r= 1;

    while (l<r){
        //if Left Height is SMALLER than Right height, no point, move on is 
        if (heights[r]>heights[l]){
            l++;
            r++;
        }

        if (heights[r] < heights[l]){
            //height right next to it is small
            //keep going till where it is talle
            while (heights[r] < heights[l]){
                r++;
            }
        }
    }

    return result;
}

int main(){
    vector<int> heights = {0,2,0,3,1,0,1,3,2,1};
    int result = trap (heights);
    cout << result << endl;
    return 0;
}