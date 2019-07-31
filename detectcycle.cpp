#include<bits/stdc++.h>
using namespace std;

#define N 100

int graph[N][N];

int vis[N];

bool dfs(int start, int nodes,int parent)
{
    
    vis[start] = 1;
    
    bool ans = false;
    
    for (int i=0;i<nodes;i++)
    {
        if (graph[start][i] == 1 && vis[i] == 1 && parent != i)
        {
            return true;
        }
        if (graph[start][i] == 1 && vis[i] == 0)
        {
            ans = ans || dfs(i, nodes, start);
        }
    }
    return ans;
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    
    for (int i=0;i<nodes;i++)
    {
        for (int j=0;j<nodes;j++)
        {
            graph[i][j] = 0;
        }
    }
    
    for (int i=0;i<nodes;i++)
    {
        vis[i] = 0;
    }
    
    for (int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    
    int start;
//    cin>>start;
    start = 0;
    if (dfs(start, nodes, start))
        cout<<"cycle detected";
    else
        cout<<"cycle not found";
    cout<<endl;
    return 0;
}