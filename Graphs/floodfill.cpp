#include<iostream>
using namespace std;

int a[100][100];

void flood(int x, int y, int k, int n, int m, int original)
{
    if (x<0 || x>n-1 || y<0 || y>m-1)
        return;
    
    if (a[x-1][y] == original)
    {
        a[x-1][y] = k;
        
        flood (x-1,y,k,n,m,original);
    }
    
    if (a[x+1][y] == original)
    {
        a[x+1][y] = k;
        flood(x+1,y,k,n,m,original);
    }
    
    if (a[x][y-1] == original)
    {
        a[x][y-1] = k;
        flood(x,y-1,k,n,m,original);
    }
    
    if (a[x][y+1] == original)
    {
        a[x][y+1] = k;
        flood(x,y+1,k,n,m,original);
    }
        
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	   // int a[n][m];
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    
	    int x,y,k;
	    
	    cin>>x>>y>>k;
	    
	    int original = a[x][y];
	    
	    a[x][y] = k;
	    flood(x,y,k,n,m,original);
	    
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            cout<<a[i][j]<<" ";   
	        }
	    }
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}
