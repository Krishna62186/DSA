class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];
        int currentmax = nums[0];
        int maxsum = nums[0];
        int currentmin =nums[0];
        int minsum = nums[0];
        for(int i =1; i<nums.size(); i++){
            total += nums[i];
            currentmax = max(currentmax + nums[i] , nums[i]);
            maxsum = max(currentmax , maxsum);

            currentmin = min(currentmin + nums[i] , nums[i]);
            minsum = min(currentmin , minsum);

        }
        if(maxsum < 0)return maxsum;
        return max(maxsum , total - minsum);
    }
};