#include <bits/stdc++.h>
using namespace std;

string calculate(string op1, char c, string op2)
{
    int a = stoi(op1);
    int b = stoi(op2);
    
    if (c == '+')
        return to_string(a+b);
    
    else if (c == '-')
        return to_string(a-b);
    
    else if (c == '*')
        return to_string(a*b);
    
    else if (c == '/')
        return to_string(a/b);
    
    
}
bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}
string evaluate_prefix(string prefix)
{
    stack<string> s;
    
    for (int i=prefix.size()-1; i>=0; i--)
    {
        if (isOperator(prefix[i]))
        {
            string op1 = s.top();
            s.pop();
            
            string op2 = s.top();
            s.pop();
            
            string temp = calculate(op1,prefix[i],op2);
            
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

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    string prefix;
	    cin>>prefix;
	    
	    cout<< evaluate_prefix( prefix ) << endl;
	}
	return 0;
}
