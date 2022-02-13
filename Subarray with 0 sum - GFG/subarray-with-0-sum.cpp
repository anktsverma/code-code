// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        // 4 6 3 4 10
        int csum[n];
        csum[0]=arr[0];
        if(arr[0]==0) return true;
        for(int i=1;i<n;i++){
            if(arr[i]==0) return true;
            csum[i]=csum[i-1]+arr[i];
        }
        unordered_set<int>s;
        for(int i=0;i<n;i++){
           if(csum[i]==0) return true;
           if(s.find(csum[i])!=s.end()){
               return true;
           }
           s.insert(csum[i]);
        }
        return false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends