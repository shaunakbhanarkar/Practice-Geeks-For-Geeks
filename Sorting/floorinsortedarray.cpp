#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t ;
	
	while (t--)
	{
	    int n;
	    cin>>n;
	    
	    int index = -1;
	    
	    int k;
	    cin>>k;
	    
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        
	        if (x<k)
	            index = i;
	        
	        else if (x == k)
	        {
	            index = i;
	           // break;
	        }
	        
	        
	    }
	    
	    cout<<index<<endl;
	}
	return 0;
}
