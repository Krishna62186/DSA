class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int>mp;
        int maxfrequency =0;
        int left =0;
        int maxlenght=0;
        for(int right =0;right < s.length(); right++){
            mp[s[right]]++;
            maxfrequency = max(maxfrequency , mp[s[right]]);
            while((right - left + 1)-maxfrequency > k){
                mp[s[left]]--;
                left++;
            }

            maxlenght = max(maxlenght , right-left+1);
        }
        return maxlenght;
    }
};