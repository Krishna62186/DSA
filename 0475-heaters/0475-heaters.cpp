class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());

        int ans = 0;

        for (int i = 0; i < houses.size(); i++) {

            int index = lower_bound(heaters.begin(), heaters.end(), houses[i]) -
                        heaters.begin();

            int ceilDist = INT_MAX;
            int floorDist = INT_MAX;

            if (index < heaters.size()) {
                ceilDist = heaters[index] - houses[i];
            }

            if (index > 0) {
                floorDist = houses[i] - heaters[index - 1];
            }

            int minDist = min(floorDist, ceilDist);

            ans = max(ans, minDist);
        }

        return ans;
    }
};