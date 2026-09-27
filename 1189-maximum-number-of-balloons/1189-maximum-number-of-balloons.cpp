class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string st = "balloon";
        unordered_map<char , int>mp01;
        for(int i =0; i<st.length(); i++){
            mp01[st[i]]++;
        }
        unordered_map<char , int>mp02;
        for(int i =0; i<text.length(); i++){
            mp02[text[i]]++;
        }
        int ans = INT_MAX;
        for(int i =0;i<st.length(); i++ ){
            int count = mp02[st[i]]/mp01[st[i]];
            ans = min(ans , count);
        }
        return ans;
    }
};