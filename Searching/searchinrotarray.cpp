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
	    
	    int k;
	    cin>>k;
	    
      /*linear search!!!!!!*/
	    int ans = -1;
	    for (int i=0;i<n;i++)
	    {
	        if (a[i]==k)
	        {
	            ans = i;
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
