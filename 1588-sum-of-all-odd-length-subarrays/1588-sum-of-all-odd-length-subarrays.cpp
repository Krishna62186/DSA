class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans= 0;
        for(int i =0; i<arr.size(); i++){
            for(int j = i ; j<arr.size(); j++){
                if(( j - i + 1) % 2 == 1){
                    int currentsum =0;
                    for(int index = i; index < j +1 ; index++){
                        currentsum +=arr[index];
                    }
                    ans += currentsum;
                }
            }
        }
        return ans;
    }
};