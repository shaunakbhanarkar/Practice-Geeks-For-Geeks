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
	    
	    vector<int> v(2*n);
	    
	    for (int i=0;i<2*n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	    cout<<v[n]+v[n-1]<<endl;
	}
	return 0;
}
