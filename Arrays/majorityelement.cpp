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
	    
	    vector<int> v;

	    for (int i=0; i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    
	    int index=0;
	    int count=1;
	    
	    for (int i=0;i<n;i++)
	    {
	        if (v[i]==v[index])
	        {
	            count++;
	        }
	        else
	        {
	            count--;
	        }
	        
	        if (count==0)
	        {
	            index = i;
	            count = 1;
	        }
	    }
	    
	    count=0;
	    for (int i=0;i<n;i++)
	    {
	        if (v[index]==v[i])
	        {
	            count++;
	        }
	    }
	    
	    if (count>n/2)
	    {
	        cout<<v[index]<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
