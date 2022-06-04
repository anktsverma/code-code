// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}









 // } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void leftBoundary(Node *root,vector<int>&ans){
        if(!root) return ;
        if(root->left){
            ans.push_back(root->data);
            leftBoundary(root->left,ans);
        }
        else if(root->right){
            ans.push_back(root->data);
            leftBoundary(root->right,ans);
        }
    }
    
    void bottomBoundary(Node *root,vector<int>&ans){
        if(!root) return ;
        bottomBoundary(root->left,ans);
        if(root->left==NULL && root->right==NULL) ans.push_back(root->data);
        bottomBoundary(root->right,ans);
    }
    
    void rightBoundary(Node *root,vector<int> &ans){
        if(!root) return ;
        if(root->right){
            rightBoundary(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left){
            rightBoundary(root->left,ans);
            ans.push_back(root->data);
        }
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        if(!root) return {};
        if(root->left==NULL and root->right==NULL) return {root->data};
        vector<int>ans;
        ans.push_back(root->data);
        
        leftBoundary(root->left,ans);
        bottomBoundary(root,ans);
        rightBoundary(root->right,ans);
        return ans;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends