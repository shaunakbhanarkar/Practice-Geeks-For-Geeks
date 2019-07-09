/*This is a function problem.You only need to complete the function given below*/
/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/
void dfs(int s, vector<int> g[], bool vis[])
{
    
    // Your code here
    cout<<s<<" ";
    vis[s]=1;
    for (int i=0; i<g[s].size(); i++)
    {
        if (vis[g[s][i]] == 0)
        {
            dfs(g[s][i],g,vis);
        }
    }
}
