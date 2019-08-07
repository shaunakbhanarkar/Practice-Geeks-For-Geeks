#include<bits/stdc++.h>
using namespace std;

int lps(string s, int start, int end)
{
    if (start == end)
        return 1;
    
    if (s[start] == s[end])
    {
        if (start + 1 == end)
            return 2;
        else
            return 2 + lps(s,start+1,end-1);
    }
    
    return max(lps(s,start,end-1), lps(s,start+1,end) ) ;
    
    
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
	    
	    cout<< lps(s,0,s.size()-1) <<endl;
	}
	return 0;
}
