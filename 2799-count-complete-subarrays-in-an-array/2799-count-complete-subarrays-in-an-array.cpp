class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        // brute force 
        unordered_set<int>st(nums.begin() , nums.end());
        int k = st.size();
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            unordered_set<int>seen;
            for(int j =i;j<nums.size(); j++){
                seen.insert(nums[j]);
                if(seen.size() == k)count++;
            }
        }
        return count;
    }
};