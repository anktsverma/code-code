class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1){
            return{{1}};
        }
        vector<vector<int>>pre=generate(numRows-1);
        vector<int>v;
        v.push_back(1);
        int n=pre.size()-1;
        for(int i=1;i<pre[n].size();i++){
            v.push_back(pre[n][i-1]+pre[n][i]);
        }
        v.push_back(1);
        pre.push_back(v);
        return pre;
    }
};