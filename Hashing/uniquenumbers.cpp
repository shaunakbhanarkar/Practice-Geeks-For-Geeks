#include<bits/stdc++.h>
using namespace std;

bool distinct_digits(int n)
{
    vector<int> v;
    
    while(n>0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    sort(v.begin(),v.end());
    
    for (int i=0;i<v.size()-1;i++)
    {
        if (v[i]==v[i+1])
            return false;
    }
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int start;
	    int end;
	    cin>>start>>end;
	    
        for (int i=start; i<=end ; i++)
        {
            if (distinct_digits(i))
                cout<<i<<" ";
        }
        cout<<endl;
	}
	return 0;
}
