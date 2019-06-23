#include<iostream>
using namespace std;
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    int a[n][m];
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    int sum=0;
	    
	    for (int i=x1-1; i <= x2-1;i++)
	    {
	        for (int j=y1-1; j<=y2-1 ; j++)
	        {
	            sum = sum + a[i][j];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
