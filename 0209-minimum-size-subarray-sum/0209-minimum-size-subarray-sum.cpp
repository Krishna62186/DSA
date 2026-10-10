class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0;
        int minlen = INT_MAX;
        int ans =0;
        for(int right =0; right < nums.size(); right++){
            ans+=nums[right];
            while(ans >= target){
                minlen = min(minlen , right - left + 1);
                ans -= nums[left];
                left++;
            }
        }
            return (minlen == INT_MAX) ? 0 : minlen;
    }
};