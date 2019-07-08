#include<bits/stdc++.h>
using namespace std;

#define N 100

int adj[N][N];

int vis[N];

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
    
    queue<int> q;
    
    q.push(start);
    
    
    vis[start] = 1;
    
    do
    {
                start = q.front();

        for (int i=0;i<nodes;i++)
        {
            if (adj[start][i]==1 && vis[i]==0)
            {
                q.push(i);
                vis[i]=1;
            }
        }
        
        vis[start]=1;
        
        cout<<q.front()+1<<" ";
        
        q.pop();
        
    }
    while( q.empty() == false);
    
    cout<<endl;
    
    return 0;
    
    
}
