class Solution {
public:
    int maxArea(vector<int>& height) {
        int total =0;
        int right = height.size()-1;
        int left  =0;
        while(left < right){
            int area = (right - left) * min(height[left] , height[right]);
            total = max(area , total);
            if(height[left] < height[right] ){
                left++;
            }else{
                right--;
            }
        }
        return total;
    }
};