class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentmaxi = nums[0];
        int currentmin = nums[0];
        int maxi = nums[0];
        for(int i =1 ; i<nums.size(); i++){
            if(nums[i] < 0){
                swap(currentmaxi , currentmin );
            }
            currentmaxi = max(nums[i], nums[i]*currentmaxi );
            currentmin = min(nums[i] , nums[i] * currentmin);
            maxi = max(maxi , currentmaxi);
        }
        return maxi;
    }
};