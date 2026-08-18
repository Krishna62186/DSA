class Solution {
public:
    int jump(vector<int>& nums) {
        int jump =0;
        int left =0;
        int right = 0;
        for(int i =0; i<nums.size()-1; i++){
            right = max(nums[i] + i , right);
            if(i == left){
                jump++;
                left = right;
            }
        }
        return jump;
    }
};