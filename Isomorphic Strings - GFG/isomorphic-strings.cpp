// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        // aab
        // xxy
        // arr1 0 1 2 3 
            //  2 1
        // arr2 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 
                                                                            // 2  1
        int arr1[26]={0};
        int arr2[26]={0};
        if(str1.length()!=str2.length()) return false;
        for(int i=0;i<str1.size();i++){
            arr1[str1[i]-'a']++;
            arr2[str2[i]-'a']++;
        }
        for(int i=0;i<str1.size();i++){
            if(arr1[str1[i]-'a']!=arr2[str2[i]-'a']) return false;
        }
        return true;
        
    }

};


// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends