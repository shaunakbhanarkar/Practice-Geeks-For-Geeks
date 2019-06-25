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
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int p;
	    cin>>p;
	    
	    
	    int buy = a[0];
	    
	    int balance = 0;
	    
	    for (int i=0;i<n-1;i++)
	    {
	        if (a[i]-a[i+1]<0)
	        {
	            balance = balance + (a[i]-a[i+1]);
	            if (balance<0)
	            {
	                buy = buy - balance;
	                balance = 0;
	            }
	        }
	        else
	        {
	            balance = balance + (a[i]-a[i+1]);  
	        }
	    }
	    cout<<buy*p<<endl;
	}
	return 0;
}
