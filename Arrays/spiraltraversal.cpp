#include<bits/stdc++.h>
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
	    
	    int left = 0;
	    int up = 0;
	    int right = m-1;
	    int down = n-1;
	    int count=n*m;
	    while(true)
	    {
    	    for (int i=left ; i<=right ; i++)
    	    {
    	        cout<<a[up][i]<<" ";
    	        count--;

    	    }
    	    if (count < 1)  break;
    	    up++;
    	    for (int i=up ; i<=down ; i++)
    	    {
    	        cout<<a[i][right]<<" ";
    	        count--;

    	    }
    	        	    if (count < 1)  break;

    	    right--;
    	    for (int i=right; i>=left ; i--)
    	    {
    	        cout<<a[down][i]<<" ";
    	        count--;

    	    }
    	        	    if (count < 1)  break;

    	    down--;
    	    for (int i=down; i>=up ;i--)
    	    {
    	        cout<<a[i][left]<<" ";
    	        count--;

    	    }
    	    left++;
    	    if (count<1)    break;
	    }
	    cout<<endl;
	}
	return 0;
}
