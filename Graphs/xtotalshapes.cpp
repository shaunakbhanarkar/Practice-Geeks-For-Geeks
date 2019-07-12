#include<iostream>
using namespace std;

int a[50][50];

int res;

bool flag;

void function(int n, int m, int x, int y)
{

    if (x<0 || x>n-1 || y<0 || y>m-1)
        return;
        
    if (a[x][y]==1)
    {
        a[x][y]=0;
        flag = true;
        
        function(n,m,x-1,y);
        function(n,m,x+1,y);
        function(n,m,x,y-1);
        function(n,m,x,y+1);
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
	    
	    res = 0;
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            char c;
	            cin>>c;
	            
	            if (c == 'X')
	                a[i][j] = 1;
	            else
	                a[i][j] = 0;
	        }
	    }
	    
	    for (int i=0; i<n; i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            function(n,m,i,j);
	            if (flag == true)
	                res++;
	            flag = false;
	        }
	    }
	    
	    cout<<res<<endl;
	}
	return 0;
}
