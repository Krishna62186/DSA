class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int>mp01;
        for(int i =0; i<ransomNote.length(); i++){
            mp01[ransomNote[i]]++;
        }
        unordered_map<char ,int>mp02;
        for(int i =0; i<magazine.length(); i++){
            mp02[magazine[i]]++;
        }
        int ans = INT_MAX;
        for(int i =0; i<ransomNote.length(); i++){
            int count = mp02[ransomNote[i]]/mp01[ransomNote[i]];
            ans = min(ans , count);
            
        }
        if(ans >= 1){
            return true;
        }else{
            return  false;
        }
    }
};