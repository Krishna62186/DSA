class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int currentsum =0;
        int ans = 0;
        unordered_map<int , int>mp;
        mp[0] =1;
        for(int i =0; i<nums.size(); i++){
            currentsum += nums[i];
            if(mp.find(currentsum - goal) != mp.end()){
                ans += mp[currentsum - goal];
            }
            mp[currentsum]++;
        }
        return ans;
    }
};