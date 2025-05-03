class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {};
        for (int i=0; i<nums.size(); i++){

            for (int j=0; j<nums.size(); j++){
                if (i != j){
                    int check = nums[i] + nums[j];

                    if (check == target){
                        result = {j, i};
                    };
                }
            };
        };

        return result;
    };
};
