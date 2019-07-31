#include<bits/stdc++.h>
using namespace std;

bool dfs(int start, vector<int> adj[], bool vis[], int parent)
{
    
//    cout<<start<<" ";
    vis[start] = true;
    
    bool ans = false;
    for (int i=0;i<adj[start].size();i++)
    {
        if (vis[adj[start][i]] == true && parent != adj[start][i])
        {
            return true;
        }
        if (vis[adj[start][i]] == false)
        {
            ans = ans || dfs(adj[start][i],adj,vis, start);
        }
    }
    return ans;
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    
    vector<int> adj[nodes];
    bool vis[nodes];
    
    for (int i=0; i<nodes;i++)
    {
        vis[i] = false;
    }
    
    for (int i=0;i<edges;i++)
        
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int start;
//    cin>>start;
    start = 0;
    
    if(dfs(start,adj,vis, start))
        cout<<"cycle detected"<<endl;
    else
        cout<<"cycle not found"<<endl;
    
    return 0;
    
}