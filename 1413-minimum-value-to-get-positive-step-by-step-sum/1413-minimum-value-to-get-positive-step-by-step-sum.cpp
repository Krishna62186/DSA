class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int>prefixsum(nums.size()+1);
        prefixsum[0] = nums[0];
        for(int i =1 ; i<nums.size(); i++){
            prefixsum[i] = prefixsum[i-1]+nums[i];
        }
        int mini = INT_MAX;
        for(int i = 0 ; i<prefixsum.size(); i++){
            mini = min(mini , prefixsum[i]);
        }
        return abs(mini) + 1;
    }
};