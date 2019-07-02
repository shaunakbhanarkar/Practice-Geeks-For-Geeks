#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    long a,b,c;
	    cin>>a>>b>>c;
	    
	    long n;
	    cin>>n;
	    
	    vector<long> v(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        v[i] = a*v[i]*v[i] + b*v[i] + c;
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}
