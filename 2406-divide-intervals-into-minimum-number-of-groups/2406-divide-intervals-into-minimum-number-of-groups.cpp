class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        map<int, int> mp;

        for (auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];

            mp[start]++;
            mp[end + 1]--;
        }

        int groups = 0;
        int ans = 0;

        for (auto& it : mp) {
            groups += it.second;
            ans = max(ans, groups);
        }

        return ans;
    }
};