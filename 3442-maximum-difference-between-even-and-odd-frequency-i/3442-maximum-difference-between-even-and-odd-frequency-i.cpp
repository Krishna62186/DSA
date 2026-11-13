class Solution {
public:
    int maxDifference(string s) {
        map<char, int>mp;
        for(int i =0; i<s.length(); i++){
            mp[s[i]]++;
        }
        int maxeven = 0;
        int maxodd = 0;
        int mineven = INT_MAX;
        int minodd = INT_MAX;
        for(auto i = mp.begin(); i !=mp.end(); i++){
            if(i->second % 2 == 0){
                maxeven = max(maxeven , i->second);
                mineven = min(mineven , i->second);
            }else{
                maxodd = max(maxodd , i->second);
                minodd = min(minodd , i->second);
            }
        }
        return maxodd - mineven ;
    }
};