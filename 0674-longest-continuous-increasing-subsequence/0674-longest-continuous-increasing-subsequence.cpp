class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        // using sliding window approach
        if (nums.empty())
            return 0;
        int left = 0;
        int maxlen = 1;
        for (int right = 1; right < nums.size(); right++) {
            if (nums[right] <= nums[right - 1]) {
                left = right;
            }
            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};