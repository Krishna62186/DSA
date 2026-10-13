class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int>mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = INT_MIN;
        int result ;
        for(auto it: mp){
            if(ans < it.second){
                ans = it.second;
                result = it.first;
            }
        }
        return result;

    }
};