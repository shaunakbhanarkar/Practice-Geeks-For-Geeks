#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while (t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    

	    for (int i=0 ; i < n ;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int max=a[n-1];
	    
	    a[n-1]=-1;
	    
	    for (int i=n-2;i>=0;i--)
	    {
	        int temp=a[i];
	        a[i]=max;
	        if (max < temp)
	        {
	            max=temp;
	        }
	    }
	    
	    for (int i=0; i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}
