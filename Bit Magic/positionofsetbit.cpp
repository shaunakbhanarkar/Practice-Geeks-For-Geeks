#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    
	    cin>>n;
	    
	    int pos=0;
	    
	    int i=1;
	    
	    int count = 0;
	    
	    while(n>0)
	    {
	        if (n%2 == 1)
	        {
	            pos = i;
	            count++;
	        }
	        n = n / 2;
	        i++;
	    }
	    
	    if (count!= 1)
	        cout<<-1<<endl;
	    else
	        cout<<pos<<endl;
	}
	return 0;
}
