class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectedsum = (nums.size() * (nums.size() +1))/2;
        int actualsum = 0;
        for(int i =0; i<nums.size(); i++){
            actualsum += nums[i];
        }
        return expectedsum - actualsum;
    }
};