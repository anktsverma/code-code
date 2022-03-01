class Solution {
public:
    int cntBits(int n){
        int count=0;
        while(n){
            count+=(1&n);
            n>>=1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(cntBits(i));
        }
        return ans;
    }
};