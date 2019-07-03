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
	    
	    vector< pair<long,long> > v(n);
	    
	    long start[n];
	    long finish[n];
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>start[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cin>>finish[i];
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        pair<long,long> p;
	        p.first = finish[i];
	        p.second = start[i];
	        v[i] = p;
	    }
	    
	    sort(v.begin(),v.end());
	    
	   // int count = 1;
	    
	    pair <long , long> p1;
	    pair <long , long> p2;
	    
	    int index1 = 0;
	    
	    int index2 = 1;
	    
	    for (int i=0;i<n;i++)
	    {
	        if (start[i]==v[0].second && finish[i]==v[0].first)
	        {
	            cout<<i+1<<" ";
	            break;
	        }
	    }
	    
	    while(index1<n && index2<n)
	    {
	        
	        
	        p1 = v[index1];
	        p2 = v[index2];
	        
	        if (p1.first < p2.second)
	        {
	           // count++;
	            for (int i=0;i<n;i++)
	            {
	                if (start[i]==p2.second && finish[i]==p2.first)
	                {
	                    cout<<i+1<<" ";
	                    break;
	                }
	            }
	            index1 = index2;
	            index2 = index2 + 1;
	        }
	        else
	        {
	            index2 = index2 + 1;
	        }
	        
	        
	        
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}
