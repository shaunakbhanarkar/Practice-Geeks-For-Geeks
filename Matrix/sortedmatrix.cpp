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
	    
	    int size = n*n;
	    vector<int> v(size);
	    for (int i=0;i<size;i++)
	    {
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for (int i=0;i<size;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
