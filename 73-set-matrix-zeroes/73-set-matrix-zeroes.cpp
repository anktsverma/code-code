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
    void setZeroes(vector<vector<int>>& matrix) {
          int n=matrix.size();
          int m=matrix[0].size();
          vector<int>r(n,-1),c(m,-1);
        
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(matrix[i][j]==0){
                      r[i]=0;
                      c[j]=0;
                  }
              }
          }
        
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                   if(r[i]==0 || c[j]==0){
                       matrix[i][j]=0;
                   }

              }  
          }
    }
    
};