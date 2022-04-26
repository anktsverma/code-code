class Solution {
public:
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
                   if(r[i]==0){
                       matrix[i][j]=0;
                   }
                   else if(c[j]==0){
                       matrix[i][j]=0;
                   }
              }  
          }
    }
    
};