#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    long n;
	    cin>>n;
	    long res = n;
	    vector<long> v;
	    while(n>0)
	    {
	        v.push_back(n%10);
	        n=n/10;
	    }
	    long sum=0;
	    for (int i=0;i<v.size();i++)
	    {
	        sum = sum + pow(v[i],v.size());
	    }
	    
	    if (sum == res)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    
	}
	return 0;
}
