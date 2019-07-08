#include<bits/stdc++.h>
using namespace std;

#define N 100

int adj[N][N];

int vis[N];

void dfs(int n, int nodes)
{
    if (vis[n]==1)
    {
        return;
    }
    else
    {
        cout<<n+1<<" ";
        vis[n]=1;
        for (int i=0;i<nodes;i++)
        {
            if (adj[n][i] == 1 && vis[i]==0)
            {
                dfs(i,nodes);
            }
        }
    }
}

int main()
{
    int nodes, edges;
    
    cin>>nodes>>edges;
    
    for (int i=0;i<nodes;i++)
    {
        for (int j=0;j<nodes;j++)
        {
            adj[i][j]=0;
        }
    }
    
    for (int i=0;i<nodes;i++)
    {
        vis[i]=0;
    }
    
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        
        adj[u-1][v-1]=1;
        adj[v-1][u-1]=1;
    }
    
    int start;
    cin>>start;
    start = start - 1;
    
    dfs(start,nodes);
    
    return 0;
    
    
}
