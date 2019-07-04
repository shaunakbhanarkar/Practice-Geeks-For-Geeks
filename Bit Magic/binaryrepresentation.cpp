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
	    
	    int a[14];
	    int i;
	    for ( i=0;i<14;i++)
	    {
	        a[i]=0;
	    }
	    i=13;
	    while(n>0)
	    {
	        a[i] = n%2;
	        n=n/2;
	        i--;
	    }
	    
	    for (int i=0;i<14;i++)
	    {
	        cout<<a[i];
	    }
	    cout<<endl;
	}
	
	return 0;
}
