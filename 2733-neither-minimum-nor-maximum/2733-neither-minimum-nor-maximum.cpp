class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i =0; i<nums.size(); i++){
            maxi = max(maxi , nums[i]);
            mini = min(mini , nums[i]);
        }
        for(int i =0; i<nums.size(); i++){
            if(nums[i] != mini && nums[i] != maxi){
                return nums[i];
            }
        }
        return -1;
    }
};