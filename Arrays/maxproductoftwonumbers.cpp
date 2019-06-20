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
	    int max, secondmax;
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if (i==0)
	        {
	            max=x;
	        }
	        if (i==1)
	        {
	            if (max<x)
	            {
	                secondmax=max;
	                max=x;
	            }
	            else
	            {
	                secondmax=x;
	            }
	        }
	        else
	        {
	            if(max<=x)
	            {
	                secondmax = max;
	                max = x;
	            }
	            else if (max>x && secondmax<x)
	            {
	                secondmax=x;
	            }
	        }
	    }
	    cout<<max*secondmax<<endl;
	}
	return 0;
}
