class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;
        int high = rows*cols - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            //convert 1d to 2d
            int row = mid/cols;
            int col = mid%cols;

            int element = matrix[row][col];

            if(element == target) return true;
            else if(element > target){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};
