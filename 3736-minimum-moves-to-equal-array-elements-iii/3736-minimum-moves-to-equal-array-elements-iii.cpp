class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MIN;
        for(int i =0; i<nums.size(); i++){
            mini = max(mini , nums[i]);
        }
        int ans = 0;
        for(int i =0; i<nums.size(); i++){
            ans+= abs(nums[i] - mini);
        }
        return ans;
    }
};