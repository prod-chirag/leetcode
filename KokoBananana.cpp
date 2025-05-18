#include <iostream>
#include <vector>

using namespace std;

int minEatingSpeed(vector<int> nums, int h){
   int min = 25;
   int l = 1;
   int r = 25;
   while (l<=r){
    int totalhours = 0;
    int mid = (l+r)/2;
    for (int i: nums){
        //3
       totalhours += ceil(static_cast<double>(i) / mid);
    }

    if (totalhours == h){
        return mid;
    }else if (totalhours > h){
        l = mid + 1;
    }else{
        if (mid < min){
            min = mid;
        };
        r = mid - 1;
    }
   }
    return min;
}

int main(){
    vector<int> nums = {25,10,23,4};
    int hour = 8;
    int result = minEatingSpeed(nums, hour);
    cout << "Rate: "<< result <<endl;
    return 0;
}