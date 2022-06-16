class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0;
        int k=matrix.size()-1;
        while(i<k){
            swap(matrix[i++],matrix[k--]);
        }
        
        for(int j=0;j<matrix.size();j++){
            for(int l=j+1;l<matrix[i].size();l++){
                swap(matrix[j][l],matrix[l][j]);
            }
        }
    }
};