class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i =0; i<nums.size(); i++){
            int sum = sum + nums[i];
            maxi = max(maxi , sum);
            if(sum < 0){
                sum =0;
            }
        }
        return maxi;
    }
};