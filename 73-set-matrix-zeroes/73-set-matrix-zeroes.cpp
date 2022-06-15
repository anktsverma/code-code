class Solution {
public:
//   TC - O(N*M*(log(N)+log(M))
//     void setZeroes(vector<vector<int>>& matrix) {
//         set<int>r,c;
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[i].size();j++){
//                 if(matrix[i][j]==0){
//                     c.insert(j);
//                     r.insert(i);
//                 }
//             }
//         }
        
//       for(int i=0;i<matrix.size();i++){
//           for(int j=0;j<matrix[i].size();j++){
//               if(c.find(j)!=c.end() || r.find(i)!=r.end()){
//                   matrix[i][j]=0;
//               }
//           }
//       }
//     }
    
//  TC - O(N*M)   SC- O(N+M)
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> r(m,-1),c(n,-1);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(r[i]==0 || c[j]==0){
                    mat[i][j]=0;
                }
            }
        }
    }
    
};