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
	    
	    int res = 0;
	    
	    while(n>0)
	    {
	        if (n%3 == 0)
	        {
	            res++;
	            n=n/3;
	        }
	        else
	        {
	            res++;
	            n=n-1;
	        }
	    }
	    
	    cout<<res-1<<endl;
	}
	return 0;
}
