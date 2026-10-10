class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        int ans =0;
        int currentsum= 0;
        mp[0] = 1;
        for(int i =0; i<nums.size(); i++){
            currentsum += nums[i];
            if(mp.find(currentsum - k) != mp.end()){
                ans+= mp[currentsum - k];
            }
            mp[currentsum]++;
        }
        return ans;
    }
};