#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

string postfix_to_prefix (string postfix)
{
    stack<string> s;
    
    for (int i=0; i<postfix.size(); i++)
    {
        if (isOperator(postfix[i]))
        {
            string op1 = s.top();
            s.pop();
            
            string op2 = s.top();
            s.pop();
            
            string temp =  postfix[i] + op1 + op2 ;
            
            s.push(temp);
        }
        else
        {
            string temp;
            temp.push_back(postfix[i]);
            
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
        string postfix;
        cin>>postfix;
        
        cout << postfix_to_prefix( postfix) <<endl;
    }
	return 0;
}
