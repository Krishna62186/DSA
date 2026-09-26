class Solution {
public:
    static bool comp(vector<int>&first , vector<int>&second){
        return first[1] < second[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return 0;

        }
        sort(intervals.begin(), intervals.end(), comp);
        int removecount =0;
        int lastendtime = intervals[0][1];
        for(int i =1 ; i<intervals.size(); i++){
            if(intervals[i][0] < lastendtime){
                removecount++;
            }else{
                lastendtime = intervals[i][1];
            }
        }
        return removecount;
    }
};