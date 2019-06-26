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
	    cin>>n;
	    
	    int a[n][n];
	    
	    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    
	   // for (int i=0;i<n;i++)
	   // {
	   //     for (int j=0;j<n;j++)
	   //     {
	   //         cout<<a[i][j]<<" ";
	   //     }
	   //     cout<<endl;
	   // }
	    
	    for (int j=0;j<n;j++)
	    {
	        for (int i=n-1;i>=0;i--)
	        {
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

// 1   2   3
// 4   5   6
// 7   8   9

// 7   4   1
// 8   5   2
// 9   6   3

