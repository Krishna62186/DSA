class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>mp;
        mp[0] = -1;
        int prefix = 0;
        int maxi = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0){
                prefix += -1;
            }else{
                prefix += 1;
            }
            if(mp.find(prefix) != mp.end()) {
                maxi = max(maxi, i - mp[prefix]);
            }
            else {
            
                mp[prefix] = i;
            }
        }
        return maxi;
    }
};