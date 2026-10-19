class Solution {
public:
    void solve(vector<int>&current , vector<vector<int>>&ans , vector<int>&nums , vector<bool>&used){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(used[i]){
                continue;
            }
            if( i > 0 && nums[i] == nums[i-1] && !used[i-1]){
                continue;
            }
            current.push_back(nums[i]);
            used[i] = true;
            solve(current , ans , nums , used);
            current.pop_back();
            used[i]= false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>current;
        vector<bool>used(nums.size() , false);
        sort(nums.begin(), nums.end());
        solve(current , ans , nums , used);
        return ans;
    }
};