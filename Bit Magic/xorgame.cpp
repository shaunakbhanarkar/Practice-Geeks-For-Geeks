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
	    
	    int res = 0;
	    
	    if (n%2 == 0)
	        cout<<0<<endl;
	    
	    else
	    {
	        for (int i=0;i<n;i=i+2)
	        {
	            res = res ^ a[i];
	        }
	        cout<<res<<endl;
	    }
    }
	return 0;
}
