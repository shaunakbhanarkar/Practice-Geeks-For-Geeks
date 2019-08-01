/*This is a function problem.You only need to complete the function given below*/
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
bool dfs(int start, vector<int> adj[], bool vis[],int parent )
{
    vis[start] = true;
    
    bool ans = false;
    
    for (int i=0;i<adj[start].size();i++)
    {
        if (adj[start][i] == start)
            return true;
        if (vis[adj[start][i]] == true && adj[start][i] != parent)
        {
            return true;
        }
        if (vis[adj[start][i]] == false)
        {
            ans = ans || dfs(adj[start][i], adj, vis, start);
        }
    }
    
    return ans;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   
   bool vis[V];
   
   for (int i=0;i<V;i++)
   {
       vis[i] = false;
   }
   
   int start = 0;
   
   bool ans = false;
   for (int i=0; i<V;i++)
   {
       if (vis[i]== false)
            ans = ans || dfs(i,adj,vis,i);
   }
   return ans;
   
}
