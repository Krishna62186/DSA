class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>mp;
        for(int i =0; i<nums.size(); i++){
            int reminder = target - nums[i];
            if(mp.count(reminder)){
                return {i , mp[reminder]};
            }
            mp[nums[i]] = i;
        }
        return {};

    }
};