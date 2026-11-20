class Solution {
public:
    int digitFrequencyScore(int n) {
        int num = n;
        vector<int>ans;
        int sum =0;
        while(num !=0){
            int a = num%10;
            ans.push_back(a);
            num = num/10;
        }
        unordered_map<int , int>temp;
        for(int i =0; i<ans.size(); i++){
            temp[ans[i]]++;
        }
        for(auto it: temp){
           sum = sum+ it.first* it.second ;
        }
        return sum;
    }
};