#include<bits/stdc++.h>
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
	    
	    int k;
	    cin>>k;
	    
	    vector<int> a(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int count=0;
	    for (int i=0;i<n;i++)
	    {
	        int res = a[i];
	        
	        for (int j=0; j<n; j++)
	        {
	            if (res + a[j] == k && j!=i)
	                count++;
	        }
	    }
	    
	    cout<<count/2<<endl;
	}
	return 0;
}
