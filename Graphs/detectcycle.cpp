/*This is a function problem.You only need to complete the function given below*/
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
bool vis[100] = {false};
bool bfs(int start, vector<int> adj[], bool vis[], int parent)
{

    int s = start;
    
    queue<int> q;
    
    q.push(s);
    vis[s] = true;
    
    int par[100] = {-1};
    while(q.empty() == false)

    // do
    {
        s = q.front();
        // vis[s] = true;
        
        q.pop();
        
        for (int i=0;i<adj[s].size();i++)
        {
            if (adj[s][i] == s)
                return true;
            if (vis[adj[s][i]] == true && par[s] != adj[s][i])
                return true;
            if (vis[adj[s][i]] == false)
            {
                q.push(adj[s][i]);
                par[adj[s][i]] = s;
                vis[adj[s][i]] = true;
            }
            
            
        }
        
        // q.pop();
    }
    // while(q.empty() == false);
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
    for (int i=0;i<V;i++)
    {
        vis[i] = false;
    }
    

    bool ans = false;
    
    for (int i=0;i<V;i++)
    {
        if (vis[i]==false)
        {
            ans = ans || bfs(i,adj,vis,i);
        }
        
    }
    
    return ans;
}
