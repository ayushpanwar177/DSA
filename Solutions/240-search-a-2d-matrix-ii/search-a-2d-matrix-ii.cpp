class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int col=n-1;
        while(row>=0&&col>=0&&row<m&&col<n){
            if(matrix[row][col]==target)
            return true;
            else if (matrix[row][col]>target){
                col--;
            }
            else if(matrix[row][col]<target)
            row++;
        }
        return false;
    }
};