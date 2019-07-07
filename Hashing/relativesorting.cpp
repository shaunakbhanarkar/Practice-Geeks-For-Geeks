#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        
        cin>>n>>m;
        
        map<int,int> mymap;
        
        vector<int> v(m);
        
        vector<int> a(n);
        
        for (int i=0; i< n ; i++)
        {
            int x;
            cin>>x;
            
            a[i] = x;
            
            if (mymap.count(x)==0)
                mymap.insert(pair<int,int> (x,1));
            else
            {
                int temp = mymap.at(x);
                mymap.erase(x);
                mymap.insert(pair<int,int> (x,temp+1));
            }
        }
        
        for (int i=0;i<m;i++)
        {
            cin>>v[i];
        }
        
        for (int i=0;i<m;i++)
        {
            int k = mymap.at(v[i]);
            while(k--)
            {
                cout<<v[i]<<" ";
            }
            mymap.erase(v[i]);
            
            for (int j=0;j<a.size();j++)
            {
                if (a[j]==v[i])
                {
                    a.erase(a.begin()+j);
                    j--;
                }
            }
            
            
        }
        
        sort(a.begin(),a.end());
        
        for (int i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
    }
	return 0;
}
