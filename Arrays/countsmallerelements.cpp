#include<iostream>
using namespace std;
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	   // int b[n];
	    for (int i=0;i<n-1;i++)
	    {
	        int res = a[i];
	        int count = 0;
	        
	        for (int j=i+1;j<n;j++)
	        {
	            if (a[j]<res)
	                count++;
	        }
	        
	        cout<<count<<" ";
	    }
	    
	    cout<<0<<endl;
	}
	return 0;
}
