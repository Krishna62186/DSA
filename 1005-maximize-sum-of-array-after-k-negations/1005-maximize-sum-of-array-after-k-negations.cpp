class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        // Flip negative numbers first
        for(int i = 0; i < nums.size() && k > 0; i++) {
            if(nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        // If odd operations remain,
        // flip the smallest element
        if(k % 2 == 1) {
            int index = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[index] = -nums[index];
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};