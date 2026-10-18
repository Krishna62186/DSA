class Solution {
public:
    void solve(vector<vector<int>>&ans , vector<int>&current, int k , int n, int start , int sum){
        if(current.size()== k){
            if(sum == n){
                ans.push_back(current);
            }
            return;
        }
        for(int i =  start  ; i<= 9; i++){
            current.push_back(i);
            solve(ans , current ,k , n , i+1 , sum + i);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>current;
        solve(ans , current ,k,n,1,0);
        return ans;
    }
};