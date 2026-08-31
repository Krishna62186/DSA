class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int prevWithDeletion = 0;
        int prevWithNoDeletion = arr[0];

        int maxi = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            int currentWithDeletion =
                max(prevWithDeletion + arr[i], prevWithNoDeletion);

            int currentWithNoDeletion =
                max(arr[i], prevWithNoDeletion + arr[i]);

            prevWithDeletion = currentWithDeletion;
            prevWithNoDeletion = currentWithNoDeletion;

            maxi = max(maxi, max(prevWithDeletion, prevWithNoDeletion));
        }

        return maxi;
    }
};