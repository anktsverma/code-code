// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[],long long left,long long mid,long long right){
        long long temp[right-left+1];
        long long i=left,j=mid,k=0,count=0;
        while(i<mid and j<=right){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
                count+=mid-i;
            }
        }
        while(i<mid){
            temp[k++]=arr[i++];
        }
        while(j<=right){
            temp[k++]=arr[j++];
        }
        for(int i=left,k=0;i<=right;k++,i++){
            arr[i]=temp[k];
        }
        return count;
    }
    long long inversionCnt(long long arr[],long long left,long long right){
        long long count=0;
        if(left<right){
            long long mid=left+(right-left)/2;
            long long countLeft=inversionCnt(arr,left,mid);
            long long countRight=inversionCnt(arr,mid+1,right);
            long long mycount=merge(arr,left,mid+1,right);
            return countLeft+countRight+mycount;
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long ans=inversionCnt(arr,0,N-1);
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends