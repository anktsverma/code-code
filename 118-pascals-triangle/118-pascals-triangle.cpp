class Solution {
public:
    // TC - O()
    vector<vector<int>> generate(int numRows) {
       if(numRows==1) return {{1}};
       vector<vector<int>>pre=generate(numRows-1);
       vector<int>temp;
       temp.push_back(1);
       int n=pre.size()-1;
       for(int i=0;i<pre[n].size()-1;i++){
           temp.push_back(pre[n][i]+pre[n][i+1]);
       }
       temp.push_back(1);
       pre.push_back(temp);
       return pre;
    }
};