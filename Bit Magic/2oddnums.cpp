#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
        int size = (2*n)+2;
        
        vector<int> v(size);
        
        for (int i=0;i<size;i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());
        
        vector<int> p;
        
        for (int i=0;i<size-1;i++)
        {
            if (v[i]==v[i+1])
            {
                v[i]=0;
                v[i+1]=0;
            }
        }
        
        for (int i=0;i<size;i++)
        {
            if (v[i]!=0)
            {
                p.push_back(v[i]);
            }
        }

        if (p[0]<p[1])
            cout<<p[0]<<" "<<p[1]<<endl;
        else
            cout<<p[1]<<" "<<p[0]<<endl;
	    
	}
	return 0;
}
