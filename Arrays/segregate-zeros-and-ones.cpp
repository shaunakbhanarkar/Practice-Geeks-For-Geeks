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
	    
	    int zeros=0;
	    int ones=0;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if (x==0)
	            zeros++;
	    }
	    
	    ones = n - zeros;
	    
	    while(zeros--)
	    {
	        cout<<0<<" ";
	    }
	    while(ones--)
	    {
	        cout<<1<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
