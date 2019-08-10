#include <bits/stdc++.h>
using namespace std;

int getPriority(char c)
{
    if (c == '+' || c == '-')
        return 1;
    
    if (c == '*' || c == '/')
        return 2;
    
    return 0;
}
bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}
string infix_to_postfix(string infix)
{
    stack<char> operators;
    stack<string> operands;
    
    for(int i=0; i<infix.size(); i++)
    {
        if (infix[i] == '(')
        {
            operators.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (operators.empty()==false && operators.top() != '(' ) 
            {
                string op1 = operands.top();
                operands.pop();
                
                string op2 = operands.top();
                operands.pop();
                
                char op = operators.top();
                operators.pop();
                
                string temp = op2 + op1 + op;
                
                operands.push(temp);
            }
            operators.pop();
        }
        else if (isOperator(infix[i]) == false)
        {
            string temp;
            temp.push_back(infix[i]);
            operands.push(temp);
        }
        else
        {
            while(operators.empty() == false && getPriority(infix[i]) <= getPriority(operators.top()))
            {
                string op1 = operands.top();
                operands.pop();
                
                string op2 = operands.top();
                operands.pop();
                
                char op = operators.top();
                operators.pop();
                
                string temp = op2 + op1 + op;
                
                operands.push(temp);
            }
            
            operators.push(infix[i]);
        }
    }
    
    while(operators.empty() == false)
    {
        string op1 = operands.top();
                operands.pop();
                
                string op2 = operands.top();
                operands.pop();
                
                char op = operators.top();
                operators.pop();
                
                string temp = op2 + op1 + op;
                
                operands.push(temp);
    }
    return operands.top();
}

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    string infix;
	    cin>>infix;
	    
	    cout << infix_to_postfix(infix) << endl;
	}
	return 0;
}
