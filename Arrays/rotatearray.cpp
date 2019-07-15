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
	    
	    for (int i=k;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    
	    for (int i=0;i<k;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<endl;
	    
	}
	
	
	return 0;
}
