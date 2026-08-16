class Solution {
public:
    int maxScore(string s) {
        int one = count(s.begin() , s.end() , '1');
        int zero =0;
        int ans =0;
        for(int i =0; i<s.size()-1; i++){
            if(s[i] == '0'){
                zero++;
            }else{
                one--;
            }
            ans = max(ans , zero+one);
        }
        return ans;
    }
};