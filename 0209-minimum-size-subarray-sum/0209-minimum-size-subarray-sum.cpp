class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // sliding window  approach 
        int left =0;
        int minlen =INT_MAX;
        int sum = 0;
        for(int right =0; right < nums.size(); right++){
            
            sum  += nums[right];
            while(sum >= target){
                 int len = right - left +1;
            minlen = min(len , minlen);
                sum -= nums[left];
                left++;
            }
           
        }
        return (minlen == INT_MAX) ?  0 : minlen;
    }
};