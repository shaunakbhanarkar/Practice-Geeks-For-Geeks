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
	    int count=0;
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if (a[i]==0)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
