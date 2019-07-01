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
	    int ans=0;
	    for (int i=0;i<n-1;i++)
	    {
	        if (a[i]>a[i+1])
	       {
	           ans = a[i+1];
	           break;
	       }
	    }
	    if (ans == 0)
	        ans = a[0];
	        
	   cout<<ans<<endl;
	}
	return 0;
}
