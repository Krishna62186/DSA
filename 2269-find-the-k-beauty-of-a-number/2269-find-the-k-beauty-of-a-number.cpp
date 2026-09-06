class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str = to_string(num);
        int count = 0;

        // Step 1: Constant window
        for (int i = 0; i <= str.length() - k; i++) {

            string sub = str.substr(i, k);
            int x = stoi(sub);
            if (x != 0 && num % x == 0) {
                count++;
            }
        }

        return count;
    }
};