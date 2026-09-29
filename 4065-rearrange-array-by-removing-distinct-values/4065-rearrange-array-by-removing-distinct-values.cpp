class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        unordered_map<int , int>mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int>value;
        for(auto it:mp){
            value.push_back(it.first);
        }
        sort(value.begin(), value.end());
        vector<int>ans;
        while(true){
            bool added = false;
            for( int x:value){
                if(mp[x]>0){
                    ans.push_back(x);
                    mp[x]--;
                    added = true;
                }
               
            }
            if(!added){
                break;
            }
        }
        return ans;
    }
};