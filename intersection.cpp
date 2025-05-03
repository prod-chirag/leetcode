#include <iostream>
#include <vector>

using namespace std;

vector<int> intersection(vector<int>& num1, vector<int>& num2 ){
    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());
    int result = 0;
    for (int i =0; i<num1.size(); i++){
        int target = num1[i];
        for (int j=0; j<num2.size(); j++){
            int start = 0;
            int end = num2.size();
            while (start<=end){
                int mid = start + (end-start)/2;
                if (num2[mid]==target){
                    result = mid;
                }else if (num2[mid]>target){
                    end = mid + 1;
                }else if (num2[mid]<target){
                    start = mid - 1;
                }
            }
        }
    }
    cout << result << endl;
    return {0};
}

int main(){
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {6,7,8,1};
    intersection(nums1, nums2);
    return 0;

}