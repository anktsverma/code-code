class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         if(numRows==1) return {{1}};
         vector<vector<int>>pre=generate(numRows-1);
         vector<int>ans;
         ans.push_back(1);
         for(int i=1;i<pre.size();i++){
            ans.push_back(pre[pre.size()-1][i]+pre[pre.size()-1][i-1]);  
         }
         ans.push_back(1);
         pre.push_back(ans);
         return pre;
    }
    
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>ans;
//         ans.push_back({1});
//         if(numRows==1) return ans;
//         ans.push_back({1,1});
//         if(numRows==2) return ans;
        

//         for(int i=2;i<numRows;i++){
//             vector<int>temp;
//             temp.push_back(1);
//             for(int j=0;j<ans[i-1].size()-1;j++){
//                 temp.push_back(ans[i-1][j]+ans[i-1][j+1]);
//             }
//             temp.push_back(1);
//             ans.push_back(temp);
//         }
//         return ans;
//     }
};