#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n1;
	    cin>>n1;
	    
	    vector<int> v1;
	    
	    for (int i=0;i<n1;i++)
	    {
	        int x;
	        cin>>x;
	        v1.push_back(x);
	    }
	    
	    int n2;
	    cin>>n2;
	    
	    vector<int> v2;
	    
	    for (int i=0;i<n2;i++)
	    {
	        int x;
	        cin>>x;
	        v2.push_back(x);
	    }
	    
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());

        cout<<v1[n1-1]*v2[0]<<endl;
	    
	}
	return 0;
}
