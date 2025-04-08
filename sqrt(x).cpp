#include <iostream>

using namespace std;

int mySqrt(int x){
    int start = 0;
    int end = x;

    while(start<=end){
        int mid = (start + end + 1)>>1;

        int midsum = mid * mid;

        if (midsum == x){
            return mid;
        }else if(midsum > x){
            end = mid - 1;
        }else if(midsum<x){
            start = mid + 1;
        }
    };
    return -1;
};

int main(){
    int input;
    input = 10;
    int result = mySqrt(input);
    cout<< result << endl;
    return 0;
}