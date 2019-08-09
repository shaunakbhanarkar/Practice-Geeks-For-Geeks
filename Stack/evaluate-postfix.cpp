#include<bits/stdc++.h>
using namespace std;

string calculate(string op1, char c, string op2)
{
    int a = stoi(op1);
    int b = stoi(op2);
    
    // cout<<a<<" "<<b<<endl; 
    
    if (c == '+')
        return to_string(a+b);
    else if (c == '-')
        return to_string(b-a);
    else if (c == '*')
        return to_string(a*b);
    else if (c == '/')
        return to_string(b/a);
}

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

string evaluate_postfix(string postfix)
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
            
            string temp = calculate(op1,postfix[i],op2);
            
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
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string postfix;
	    cin>>postfix;
	    
	    cout << evaluate_postfix(postfix) << endl;
	}
	return 0;
}
