#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
	int t;
	cin>>t;
	
	while (t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v;
	    
	    int count=0;
	    for (int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if (x!=0)
	        {
	            v.push_back(x);
	            count++;
	        }
	    }
	    for (int i=0;i<v.size();i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    for (int i=0;i<n-count;i++)
	    {
	        cout<<0<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
