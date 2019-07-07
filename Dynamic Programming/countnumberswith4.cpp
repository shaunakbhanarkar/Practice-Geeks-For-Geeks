#include<iostream>
using namespace std;

int a[1000000] = {0};

void count(int x)
{
    int temp = x;
    while(x>0)
    {
        // cout<<"x="<<x<<endl;
        if (x%10 == 4)
        {
            a[temp-1]=1;
            return;
        }
        x = x/10;
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	for (int i=1;i<=1000000;i++)
	{
	    count(i);
	}
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int c=0;
	    for (int i=0;i<n;i++)
	    {
	        c = c + a[i];
	    }
	    
	    cout<<c<<endl;
	    
	}
	return 0;
}
