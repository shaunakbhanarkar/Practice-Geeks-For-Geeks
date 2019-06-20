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
	    int res;
	    for (int i=0; i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if (i==0)
	        {
	            res = x;
	        }
	        else
	            res = res ^ x;
	        
	    }
	    cout<<res<<endl;
	}
	return 0;
}
