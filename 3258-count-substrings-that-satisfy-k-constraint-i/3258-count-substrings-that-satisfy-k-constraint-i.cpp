class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans =0;
        for(int start =0;start<s.length(); start++){
            int zeros =0;
            int ones = 0;
            for(int end = start; end<s.length(); end++){
                if(s[end] == '0'){
                    zeros++;
                }else{
                    ones++;
                }
                if(zeros <= k || ones <= k){
                    ans++;
                }
            }
        }
        return ans;
    }
};