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
	    
	    int count = 0;
	    for (int i=1;i<=n;i++)
	    {
	        int x= i;
	        while(x>0)
	        {
	            if (x%2 == 1)
	                count++;
	            x = x/2;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
