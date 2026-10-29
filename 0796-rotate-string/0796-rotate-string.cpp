class Solution {
public:
    bool rotateString(string s, string goal) {
       /* for(int i =0; i<s.length(); i++){
            reverse(s.begin(), s.end());
            reverse(s.begin() , s.begin()+i);
            reverse(s.begin()+i  , s.end());
            if(s == goal){
                return true;
            }
        }
        return false; */
        if(s.length() != goal.length()) return false;

        s = s + s;
        return s.find(goal) != string::npos;
    }
};