#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int> val, vector<int> wt, int W,int n)
{
    
    int i, w; 
   int K[n+1][W+1]; 
  
   // Build table K[][] in bottom up manner 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
    
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    int w;
	    cin>>n>>w;
	    
	    vector<int> value(n);
	    vector<int> weight(n);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>value[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>weight[i];
	    }
	    
	    cout<<knapsack(value,weight,w,n)<<endl;
	}
	return 0;
}
