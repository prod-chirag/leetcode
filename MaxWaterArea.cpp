#include <iostream>
#include <vector>
using namespace std;


int maxArea(vector<int> heights){
     int l = 0;
    int r=heights.size() - 1;
    //1,7,2,5,4,7,3,6
    int max = 0;
    while (l<r){
        int area_ifLissmaller = heights[l]  * (r-l);
        int area_ifRissmaller = heights[r] * (r-l);
        //1 is l and 6 is r
        //so this matches this condition:
        if (heights[l] < heights[r]){
            //We want to calculate 1 * 6
            //use area_ifLissammer
            if(area_ifLissmaller > max){
                max = area_ifLissmaller;
            }
            //increase l as we know heights[l] is smaller in hopes of finding something better
            l++;
        }else if (heights[l] > heights [r]){
            if(area_ifRissmaller > max){
                max = area_ifRissmaller;
            }
            //move r as we know heights[r] is smaller anyways
            --r;
        }else if (heights[l] == heights[r]){
            if (area_ifLissmaller > max){
                max = area_ifLissmaller;
            }

            if (heights[l + 1] > heights[r-1] ){
                l++;
            }else{
                --r;
            }
        }
    }
    return max;
}
int main(){
    vector<int> heights = {1,7,2,5,4,7,3,6};
    int result = maxArea(heights);
    cout << result << endl;
    return 0;
}