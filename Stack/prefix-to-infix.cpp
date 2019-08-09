#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

string prefix_to_infix(string prefix)
{
    stack<string> s;
    
    for (int i = prefix.size()-1; i>=0; i--)
    {
        if (isOperator(prefix[i]))
        {
            string op1 = s.top();
            s.pop();
            
            string op2 = s.top();
            s.pop();
            
            string temp = "(" + op1 + prefix[i] + op2 + ")";
            
            s.push(temp);
        }
        else
        {
            string temp;
            temp.push_back(prefix[i]);
            
            s.push(temp);
        }
    }
    
    return s.top();
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    string prefix;
	    cin>>prefix;
	    
	    cout << prefix_to_infix(prefix) << endl;
	}
	return 0;
}
