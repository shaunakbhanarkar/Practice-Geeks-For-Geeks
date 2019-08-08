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
	    int m;
	    cin>>n;
	    cin>>m;
	    
	    vector<int> v1(n);
	    vector<int> v2(m);
	    
	    for (int i=0; i<n;i++)
	    {
	        cin>>v1[i];
	    }
	    
	    for (int i=0; i<m; i++)
	    {
	        cin>>v2[i];
	    }
	    
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());
	    
	    int i = 0;
	    int j = 0;
	    
	    int res = 0;
	    while(i<n && j<m)
	    {
	        bool flag = false;
	        if(i > 0 && v1[i]==v1[i-1])
	        {
	            i++;
	            flag = true;
	        }
	        
	        if(j>0 && v2[j]==v2[j-1])
	        {
	            j++;
	            flag = true;
	        }
	        
	        if (flag == false)
	        {
	            if (v1[i]==v2[j])
	            {
	                i++;
	                j++;
	                res++;
	            }
	            else if (v1[i]>v2[j])
	            {
	                j++;
	            }
	            else
	            {
	                i++;
	            }
	        }
	        
	    }
	    cout<<res<<endl;
	}
	return 0;
}
