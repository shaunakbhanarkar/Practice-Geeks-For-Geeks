#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    stack<char> res;
	    
	    for (int i=0;i<s.size();i++)
	    {
	       if(res.empty())
	       {
	           res.push(s[i]);
	       }
	       
	       else if (res.top() == '[' && s[i] == ']')
	       {
	           res.pop();
	       }
	       
	       else if (res.top() == '{' && s[i] == '}')
	       {
	           res.pop();
	       }
	       
	       else if (res.top() == '(' && s[i] == ')')
	       {
	           res.pop();
	       }
	       
	       else
	       {
	           res.push(s[i]);
	       }
	           
	    }
	    
	    if (res.empty())
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
	}
	return 0;
}
