class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum =0;
        int sum =0;
        for(int i =0; i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i = 0 ; i<nums.size() ; i++){
            int rightsum = sum - leftsum - nums[i];
            if(rightsum == leftsum ){
                return i;
            }
            leftsum+= nums[i];
        }
        return -1;
    }
};