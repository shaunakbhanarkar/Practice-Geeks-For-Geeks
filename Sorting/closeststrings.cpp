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
	    vector<string> v(n);
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    vector<int> v1;
	    vector<int> v2;
	    
	    for (int i=0;i<n;i++)
	    {
	        if (v[i] == s1)
	            v1.push_back(i);
	        else if (v[i] == s2)
	            v2.push_back(i);
	    }
	    
	    int min = n;
	    
	    for (int i=0;i<v1.size();i++)
	    {
	        for (int j=0;j<v2.size();j++)
	        {
	            if (min > abs(v1[i]-v2[j]) )
	                min = abs(v1[i]-v2[j]);
	        }
	    }
	 
	    cout<<min%n<<endl;
	    
	}
	return 0;
}
