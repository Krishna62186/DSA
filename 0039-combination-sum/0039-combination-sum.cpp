class Solution {
public:
    void solve(vector<vector<int>>&ans , vector<int>&current , vector<int>&candidates , int target , int sum , int start){
        if(sum == target){
            ans.push_back(current);
            return;
        }
        if(sum > target){
            return ;
        }
        for(int i = start; i<candidates.size(); i++){
            current.push_back(candidates[i]);
            solve(ans , current , candidates , target , sum + candidates[i] , i);
            current.pop_back();

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        solve(ans , current , candidates , target , 0 , 0);
        return ans;
    }
};