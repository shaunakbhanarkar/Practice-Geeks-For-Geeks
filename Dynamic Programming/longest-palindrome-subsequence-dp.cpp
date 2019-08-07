#include<bits/stdc++.h>
using namespace std;

int lps(string s, int start, int end)
{
    // if (start == end)
    //     return 1;
    
    // if (s[start] == s[end])
    // {
    //     if (start + 1 == end)
    //         return 2;
    //     else
    //         return 2 + lps(s,start+1,end-1);
    // }
    
    // return max(lps(s,start,end-1), lps(s,start+1,end) ) ;
    
    int i,j,len;
    int a[s.size()][s.size()];
    for (i=0; i<s.size();i++)
    {
        a[i][i]=1;
    }
    for (len = 2; len <= s.size(); len++)
    {
        for (i = 0; i<s.size()-len+1;i++)
        {
            j = i + len - 1;
            
            if(s[i]==s[j] && len==2)
            {
                a[i][j] = 2;
            }
            else if (s[i]==s[j] && len!=2)
            {
                a[i][j] = 2 + a[i+1][j-1];
            }
            else
            {
                a[i][j] = max(a[i+1][j], a[i][j-1]);
            }
        }
    }
    return a[0][s.size()-1];
    
    
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
