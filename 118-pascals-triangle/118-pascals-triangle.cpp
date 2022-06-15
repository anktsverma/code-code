class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         if(numRows==1) return {{1}};
         vector<int>ans;
         
         vector<vector<int>>pre=generate(numRows-1);
         ans.push_back(1);
         int n=pre.size();
         
         for(int i=0;i<pre[n-1].size()-1;i++){
             ans.push_back(pre[n-1][i]+pre[n-1][i+1]);
         }
         ans.push_back(1);
         pre.push_back(ans);
         return pre;
    }
};