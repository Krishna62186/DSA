class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        mp[0] = 1;
        int currentsum =0;
        int ans =0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] % 2 ==1){
                currentsum++;
            }
            if(mp.find(currentsum - k) != mp.end()){
                ans+=mp[currentsum - k];
            }
            mp[currentsum]++;

        }
        return ans;
    }
};