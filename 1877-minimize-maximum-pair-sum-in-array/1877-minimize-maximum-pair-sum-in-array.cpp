class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size()-1;
        int mini = INT_MIN;
        while(left < right){
            mini = max(mini  , nums[left] + nums[right]);
            left++;
            right--;
        }
        return  mini;
    }
};