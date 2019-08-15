#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int sum;
	    cin>>sum;
	    
	    int digits;
	    cin>>digits;
	    
	    int num[digits];

	    if (sum == 0)
	    {
	        if (digits == 1)
	        {
	            cout<<0;
	        }
	        else
	        {
	            cout<<-1;
	        }
	        goto label1;
	    }
	    
	    if (sum > digits*9)
	    {
	        cout<<-1;
	        goto label1;
	    }
	    
	    sum = sum - 1;
	    
	    for (int i=digits-1 ; i>0; i--)
	    {
	        if (sum > 9)
	        {
	            num[i] = 9;
	            sum = sum - 9;
	        }
	        else
	        {
	            num[i] = sum;
	            sum = 0;
	        }
	    }
	    
	    num[0] = sum + 1;
	    
	    for (int i=0; i<digits; i++)
	    {
	        cout<<num[i];
	    }
	    label1:
	        cout<<endl;
	    
	    
	}
	return 0;
}
