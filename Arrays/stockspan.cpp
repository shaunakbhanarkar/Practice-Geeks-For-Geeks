#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int n ;
	    cin>>n;
	    
	    int a[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int res=1;
	    cout<<res<<" ";
	    for (int i=1;i<n;i++)
	    {
	        res=1;
	        int j=i-1;
	        while(a[i]>=a[j] && j>=0)
	        {
	            res++;
	            j--;
	        }
	        cout<<res<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
