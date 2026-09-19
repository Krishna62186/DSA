class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        reverse(cost.begin(), cost.end());
        int mincost =0;
        for(int i =0; i<cost.size(); i++ ){
            if(i % 3!= 2){
                mincost += cost[i];
            }
        }
        return mincost;
    }
};