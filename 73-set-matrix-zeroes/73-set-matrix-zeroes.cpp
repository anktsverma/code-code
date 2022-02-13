class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>r,c;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    c.insert(j);
                    r.insert(i);
                }
            }
        }
        
      for(int i=0;i<matrix.size();i++){
          for(int j=0;j<matrix[i].size();j++){
              if(c.find(j)!=c.end() || r.find(i)!=r.end()){
                  matrix[i][j]=0;
              }
          }
      }
    }
};