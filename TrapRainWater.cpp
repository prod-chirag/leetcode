#include <vector>
#include <iostream>

using namespace std;

int trap(vector<int> heights){
    int result = 0;
    //{0,2,0,3,1,0,1,3,2,1}
    int l =0;
    int r=heights.size() - 1;
    int maxLeft = heights[l]; //0
    int maxRight = heights[r]; //1
    while(l<r){
        if ( maxLeft < maxRight){
            l++;
            if ((maxLeft - heights[l]) > 0){
                result = result + (maxLeft - heights[l]);
            }
            if (heights[l] > maxLeft){
                maxLeft = heights[l];
            }
        }else{
            --r;
            if ((maxRight - heights[r]) > 0){
                result = result + (maxRight - heights[r]);
            }
            if (heights[r] > maxRight){
                maxRight = heights[r];
            }
        }
    }
    return result;
}

int main(){
    vector<int> heights = {4,2,0,3,2,5};
    int result = trap (heights);
    cout << result << endl;
    return 0;
}