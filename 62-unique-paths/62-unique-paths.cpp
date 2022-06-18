class Solution {
public:
    // int dp[101][101];
    // int memo(int m,int n){
    //     if(m==0 || n==0){
    //         return 1;
    //     }
    //     if(dp[m][n]!=-1) return dp[m][n];
    //     return dp[m][n]=memo(m-1,n)+memo(m,n-1);
    // }
    int uniquePaths(int m, int n) {
        //top-down DP
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 or j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
        
        //bottom-up DP
        // memset(dp,-1,sizeof(dp));
        // return memo(m-1,n-1);
    }
};