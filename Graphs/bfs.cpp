/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[])
{
    // Your code here
    
    queue<int> q;
    
    q.push(s);
    
    while(q.empty()==false)
    {
        s = q.front();
        cout<<s<<" ";
        vis[s]=1;
        for (int i=0; i<adj[s].size() ; i++)
        {
            if (vis[adj[s][i]] == 0)
            {
                vis[adj[s][i]] =1;
                q.push(adj[s][i]);
            }
        }
        
        q.pop();
    }
    
}
