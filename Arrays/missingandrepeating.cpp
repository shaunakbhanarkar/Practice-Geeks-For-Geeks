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
	        a[i]=0;
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        
	        a[x-1]++;
	    }
	    
	    int zero_times, two_times;
	    for (int i=0;i<n;i++)
	    {
	        if (a[i]==0)
	            zero_times = i+1;
	       if (a[i]>1)
	            two_times = i + 1;
	    }
	    cout<<two_times<<" "<<zero_times<<endl;
	}
	return 0;
}
