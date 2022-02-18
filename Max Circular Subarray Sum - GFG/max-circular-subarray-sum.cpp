// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int mn=INT_MAX;
        int Max1=INT_MIN;
        int Max2=INT_MIN;
        int currSum=0;
        int totalSum=accumulate(arr,arr+num,0);
        for(int i=0;i<num;i++){
            currSum+=arr[i];
            mn=min(mn,currSum);
            if(currSum>0)currSum=0;
        }
        currSum=0;
        for(int i=0;i<num;i++){
            currSum+=arr[i];
            Max1=max(Max1,currSum);
            if(currSum<0)currSum=0;
        }
        Max2=totalSum-mn==0?INT_MIN:totalSum-mn;
        return max(Max1,Max2);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends