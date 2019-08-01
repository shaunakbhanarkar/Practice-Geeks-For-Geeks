/*This is a function problem.You only need to complete the function given below*/
/*The function takes an adjacency matrix representation of the graph (g)
and an integer(v) denoting the no of vertices as its arguments.
You are required to complete below method */

bool bipartite(int G[][MAX], int V, int x,int colour[])
{
    queue<int> q;
     int s = x;
     
     q.push(s);
     colour[s] = 1;
     
     while(q.empty() == false)
     {
         s = q.front();
        q.pop();
        
        if (G[s][s] == 1)
            return false;
            
        for (int i=0;i<V;i++)
        {
            if (G[s][i] == 1 && colour[i]==-1)
            {
                colour[i]= 1-colour[s];
                q.push(i);
            }
            if (G[s][i] == 1 && colour[i]==colour[s])
            {
                return false;
            }
        }
     }
     return true;
}
bool isBipartite(int G[][MAX],int V)
{
     //Your code here
     
          int colour[V] = {-1};

     for (int i=0;i<V;i++)
     {
         if (colour[i]==-1)
         {
             if (bipartite(G,V,i,colour) == false)
                return false;
         }
     }
     
     return true;
     
}
