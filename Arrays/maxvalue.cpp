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
	    
	    int max=0;
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        
	        if (max<x)
	            max = x;
	    }
	    
	    cout<<max<<endl;
	    
	}
	return 0;
}
