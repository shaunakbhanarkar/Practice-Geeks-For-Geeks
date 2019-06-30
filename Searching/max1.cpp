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
	    
	    int index = m-1;
	    int row = 0;
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<m;j++)
	        {
	            if (a[i][j]==1)
	            {
	                if (index > j)
	               {
	                   index = j;
	                   row = i;
	               }    
	                break;
	            }
	        }
	    }
	    
	    cout<<row<<endl;
	    
	    
	}
	return 0;
}
