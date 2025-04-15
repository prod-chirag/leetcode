#include <iostream>

using namespace std;

int mySqrt(int x) {
        int start = 0;
        int end = x;

        while(start<end){
            int mid;
            mid = (start+end+1)>>1;
            int product = mid * mid;
            if (product>x){
                end = mid + 1;
            }else if(product<x){
                start = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }

int main(){
    int input;
    input = 10;
    int result = mySqrt(input);
    cout<< result << endl;
    return 0;
}