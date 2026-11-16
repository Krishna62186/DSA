class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256 , -1);
        int left =0;
        int right = 0;
        int length = 0;
        while( right < s.length() ){
            if(mp[s[right]] != -1){
                left = max(left , mp[s[right]]+1);
            }
             mp[s[right]] = right;
            length = max(right - left + 1 , length);
            right ++;
        }
        return length;

    }
};