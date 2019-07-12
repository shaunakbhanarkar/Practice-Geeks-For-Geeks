#include<iostream>
using namespace std;

int a[20][20];

bool findpath(int n, int x, int y)
{
    if (x<0 || x>n-1 || y<0 || y>n-1)
    {
        return false;
    }
    
    if (a[x][y] == 2)
        return true;
        
    if (a[x][y] == 0)
        return false;
        
    if (a[x][y] == 3 || a[x][y] == 1)
    {
        a[x][y] = 0;
        
        return (findpath(n,x-1,y) || findpath(n,x+1,y) || 
        findpath(n,x,y-1) || findpath(n,x,y+1) );
    }
    
    return false;
    
    
}
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int x,y;
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	            
	            if (a[i][j] == 1)
	            {
	                x = i;
	                y = j;
	            }
	        }
	    }
	    
	    cout<<findpath(n,x,y)<<endl;
	    
	}
	return 0;
}
