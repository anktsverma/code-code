class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0;
        int right=matrix[0].size()-1;
        while(top<matrix.size() and right>=0){
            if(matrix[top][right]==target) return true;
            else if(matrix[top][right]<target)top++;
            else right--;
        }
        return false;
    }
};