class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        mp[0] = 1;
        int ans =0;
        int currentsum =0;
        for(int i=0; i<nums.size(); i++){
            currentsum += nums[i];
            if(mp.find(currentsum - k) != mp.end()){
                ans+= mp[currentsum -k];
            }
                mp[currentsum]++;
            
        }
        return ans;
    }
};