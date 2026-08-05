class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int p_len = p.length();
        int q_len = s.length();
        if(s.length() < p.length())return {};
        vector<int>freqp(26, 0);
        vector<int>window(26,0);

        for(int i =0; i<p_len; i++){
            freqp[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        vector<int>ans;
        if(freqp == window)ans.push_back(0);

        for(int i = p_len; i<q_len; i++){
            window[s[i-p_len]-'a']--;
            window[s[i] - 'a']++;
            if(freqp == window)ans.push_back(i-p_len+1);
        }
        return ans;
    }
};