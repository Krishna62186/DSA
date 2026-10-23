class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int maxi = 0;
        for(int i=0; i<n; i++){
            int right = i; 
            int left = i;
            while(left >= 0 && right < n && s[left] == s[right]){
                if(right - left + 1 > maxi){
                    maxi = right-left+1;
                    start = left;
                }
                left--;
                right++;
            }
            left = i;
            right = i+1;
            while(left >= 0 &&  right<n && s[left] == s[right]){
                if(right - left + 1 > maxi){
                    maxi = right-left+1;
                    start = left;
                }
                left--;
                right++;
            } 
        }
        return s.substr(start , maxi);
    }

};