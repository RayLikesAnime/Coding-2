#include<bits/stdc++.h>
using namespace std;
int dfs(int node,vector<int> &vis,vector<int> adj[]){
    vis[node] = 1;
    int count= 0;
    if(adj[node].size() == 0) return 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            count+=dfs(it,vis,adj);
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int> adj[n];
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a = a-1;
        b = b-1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis(n,0);
    int mini = 1e9;
    vis[0] = 1;
    for(auto it:adj[0]){
        mini = min(mini,dfs(it,vis,adj));
    }
    cout<<mini+1;
}