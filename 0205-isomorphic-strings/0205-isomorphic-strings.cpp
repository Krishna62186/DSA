class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , int>cs;
        unordered_map<char , int>ts;
        for(int  i =0; i<s.length(); i++){
            if(cs.find(s[i]) == cs.end()){
                cs[s[i]] = i;
            }
            if(ts.find(t[i]) == ts.end()){
                ts[t[i]] = i;
            }
            if(cs[s[i]] != ts[t[i]]){
                return false;
            }
        }
        return true;
    }
};