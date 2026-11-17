class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
       int mini = INT_MAX;
       int sum =0;
       for(int i =0; i<tasks.size(); i++){
        sum = tasks[i][0] + tasks[i][1];
        mini  = min(sum , mini);
       }
       return mini;
    }
};