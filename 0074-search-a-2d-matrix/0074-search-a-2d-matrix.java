class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = matrix.length;
        int col = matrix[0]. length;

        int n = row*col ;
        int start = 0;
        int end = n-1;
        while(start <= end){
            int mid = start + (end  -start )/2;
            int rowindex = mid / col;
            int colindex = mid % col;

            if(matrix[rowindex][colindex] == target){
                return true;
            }else if(matrix[rowindex][colindex] > target){
                end = mid -1;
            }else{
                start = mid + 1;
            }
        }
        return false;
    }
}