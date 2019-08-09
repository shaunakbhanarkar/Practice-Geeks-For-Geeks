/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this function*/
typedef pair<int, pair<int,int>> p;
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<p, vector<p> , greater<p> > q;
  
  for (int i=0 ;i<n; i++)
  {
      p temp;
      pair<int,int> res;
      res.first = i;
      res.second = 0;
      temp.first = mat[i][0];
      temp.second = res;
      q.push(temp);
  }
  
  int ans;
  while(k--)
  {
      p temp = q.top();
      pair<int,int> res = temp.second;
      ans = temp.first;
      q.pop();
      if (res.second + 1 < n)
      {
          temp.first = mat[res.first][res.second+1];
          res.second = res.second + 1;
          temp.second = res;
          q.push(temp);
      }
      
  }
  return ans;
  
  
  
}
