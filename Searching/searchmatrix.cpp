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
	    
	    int k;
	    cin>>k;
	    
	    int ans = 0;
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            if (a[i][j]==k)
	            {
	                ans = 1;
	                goto label;
	            }
	            if(a[i][j]>k)
	            {
	                goto tag;
	            }
	            
	        }
	        
	        tag:    i=i+0;
	    }
	    
	    label:  cout<<ans<<endl;
	}
	return 0;
	
}
