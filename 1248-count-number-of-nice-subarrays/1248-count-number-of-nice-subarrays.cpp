class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int currentsum =0;
       int ans =0;
       unordered_map<int , int>mp;
       mp[0] =1;
       for(int i =0; i<nums.size(); i++){
        currentsum += nums[i] % 2;
        if(mp.find(currentsum -k ) != mp.end()){
            ans = ans + mp[currentsum -k];
        }
        mp[currentsum]++;
       } 
       return ans;
    }
};