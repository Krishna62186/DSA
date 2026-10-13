class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       unordered_map<int , int>mp;
       mp[0]=1;
       int ans = 0;
       int prefixsum =0;
       for(int i =0; i<nums.size(); i++){
            if(nums[i] % 2 == 1){
                prefixsum++;
            }
        if(mp.find(prefixsum -k)!= mp.end()){
            ans+= mp[prefixsum - k];
        }
        mp[prefixsum]++;
       }
       return ans;
    }
};