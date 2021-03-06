class Solution {
public:
    // bool checkBipartitle(int i,vector<vector<int>>& graph,vector<int>&vis){
    //     queue<int>q;
    //     q.push(i);
    //     vis[i]=1;
    //     while(!q.empty()){
    //         int node=q.front();
    //         q.pop();
    //         for(auto it:graph[node]){
    //             if(vis[it]==-1){
    //                 q.push(it);
    //                 vis[it]=1-vis[node];
    //             }
    //             else if(vis[node]==vis[it]){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    bool checkBipartiteDFS(int node,vector<vector<int>>&graph,vector<int>&vis){
        if(vis[node]==-1) vis[node]=1;
        for(auto it:graph[node]){
            if(vis[it]==-1){
                vis[it]=1-vis[node];
                if(!checkBipartiteDFS(it,graph,vis)) return false;
            }
            else if(vis[it]==vis[node]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>vis(V,-1);
        for(int i=0;i<V;i++){
            if(vis[i]==-1){
                // if(!checkBipartitle(i,graph,vis)) return false;
                if(!checkBipartiteDFS(i,graph,vis)) return false;
            }
        }
        return true;
    }
};