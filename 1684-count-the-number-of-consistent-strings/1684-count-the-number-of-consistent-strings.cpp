class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char , int>all;
        
        int count =0;
        for(int i  =0 ; i<allowed.length(); i++){
            all[allowed[i]]++;
        }
        for(int i =0; i<words.size(); i++){
            bool consistent = true;

            for(int j = 0; j<words[i].size(); j++){
                if(all.find(words[i][j]) == all.end()){
                    consistent = false;
                }
            }
            if(consistent){
                count++;
            }
        }
        return count;
    }
};