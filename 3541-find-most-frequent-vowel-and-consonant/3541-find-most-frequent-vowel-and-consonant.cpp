class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char , int>freq;
        for(int i =0; i<s.length(); i++){
            freq[s[i]]++;
        }
        int maxiv  = 0;
        int maxic = 0;
        for(auto &it : freq){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
                if(maxiv < it.second){
                    maxiv = it.second;
                }
            }else{
                if(maxic < it.second){
                    maxic = it.second;
                }
            }
        }
        return maxic+maxiv;
    }
};