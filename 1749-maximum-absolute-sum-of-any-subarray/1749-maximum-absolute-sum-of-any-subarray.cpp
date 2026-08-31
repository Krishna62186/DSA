class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        // kadans algorithm
        int pmax = 0;
        int pmaxi = 0;
        int nmin =0;
        int nmini =0;
        for(int i =0; i<nums.size(); i++){
             pmax = max(nums[i], pmax + nums[i]);
             pmaxi = max(pmaxi , pmax);

             nmin = min(nums[i] , nmin + nums[i]);
             nmini = min(nmini , nmin);

            
        }
        return max(pmaxi , abs(nmini));
        
    }
};