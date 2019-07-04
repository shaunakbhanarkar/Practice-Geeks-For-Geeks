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
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        res = res ^ x;
	    }
	    
	    cout<<res<<endl;
	}
	return 0;
}
