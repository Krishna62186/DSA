class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len =0;
        for(int i =0; i<nums.size(); i++){
            int currlen = 1;
            for(int pos = i+1; pos < nums.size(); pos++){
                if(nums[pos] > nums[pos-1]){
                    currlen++;
                }else{
                    break;
                }
            }
            len = max(len , currlen );
        }

        for(int i = 0; i<nums.size(); i++){
            int curlen = 1;
            for(int pos = i+1; pos < nums.size(); pos++){
                if(nums[pos] < nums[pos-1]){
                    curlen ++;
                }else{
                    break;
                }
            }
            len = max(len , curlen);
        }
        return len;


    }
};