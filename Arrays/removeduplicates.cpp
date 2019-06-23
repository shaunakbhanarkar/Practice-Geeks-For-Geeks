#include<bits/stdc++.h>
using namespace std;

bool belongs(vector<char> v, char c)
{
    if (v.empty())
        return false;
    
    for (int i=0;i<v.size();i++)
    {
        if (v[i]==c)
            return true;
    }
    
    return false;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    vector<char> v;
	    
	   // int n = s.size();
	    
	    for (int i=0;i<s.size(); )
	    {
	        if (belongs(v,s[i]))
	        {
	            s.erase(s.begin()+i);
	        }
	        else
	        {
	            v.push_back(s[i]);
	            i++;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
