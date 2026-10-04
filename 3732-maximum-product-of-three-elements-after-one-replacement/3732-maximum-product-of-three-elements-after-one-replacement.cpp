class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long maxi1 = -1;
        long long maxi2 = -1;
        for(int i =0; i<nums.size();  i++){
            nums[i] = abs(nums[i]);
            if(nums[i] > maxi1){
                maxi2 = maxi1;
                maxi1 = nums[i];
            }else if(nums[i] >  maxi2){
                maxi2  = nums[i];
            }
        }
        return maxi1*maxi2*100000;

    }
};