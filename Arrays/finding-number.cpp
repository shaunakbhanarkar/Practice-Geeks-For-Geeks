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
	    int x;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    cin>>x;
	    
	    int index=-1;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==x)
	        {
	            index = i;
	            break;
	        }
	    }
	    
	    cout<<index<<endl;
	    
	}
	return 0;
}
