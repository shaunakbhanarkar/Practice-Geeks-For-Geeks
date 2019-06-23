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
	    
	    int count=0;
	    int max=0;
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        
	        if (max<x)
	        {
	            max=x;
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
