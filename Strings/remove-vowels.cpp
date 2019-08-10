#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
        
    return false;
}
int main()
 {
	//code
	int t;
	cin>>t;
	string temp;
	getline(cin,temp);
	while(t--)
	{
	    string s;
	   // cin>>s;
        getline(cin,s);	    
	    for (int i=0; i<s.size(); i++)
	    {
	        if (!isVowel(s[i]))
	            cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}
