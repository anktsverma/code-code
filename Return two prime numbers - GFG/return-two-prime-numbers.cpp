// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool isPrime(int n){
       for(int i=2;i<=sqrt(n);i++){
           if(n%i==0) return false;
       }
       return true;
   }
    vector<int> primeDivision(int N){
        // code here
        vector<int>prime;
        for(int i=2;i<N;i++){
            if(isPrime(i))prime.push_back(i);
        }
        unordered_map<int,int>mp;
        int mxRange=0;
        int low=prime[0];
        int high=prime[0];
        for(int i=0;i<prime.size();i++){
            if(mp.find(N-prime[i])!=mp.end()){
                if((mp[N-prime[i]]-prime[i])<=mxRange){
                    low=N-prime[i];
                    high=prime[i];
                }
            }
            mp[prime[i]]=prime[i];
        }
        return {low,high};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends