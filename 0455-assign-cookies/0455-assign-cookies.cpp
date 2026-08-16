class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gsize = g.size();
        int ssize = s.size();
        int ans =0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i =0;
        int j=0;
        while(i < gsize  && j < ssize){
            if(s[j] >= g[i]){
                ans++;
                i++;
                j++;
            }else{
                j++;
            }
            
        
        }
        return ans;
    }
};