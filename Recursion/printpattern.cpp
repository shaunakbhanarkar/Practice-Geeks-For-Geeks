#include<iostream>
using namespace std;

void calculate(int m, int x, bool flag)
{
    if (m == x)
    {
        cout<<m<<" ";
        return;
    }
    
    if (m>0 && !flag)
    {
        cout<<m<<" ";
        calculate(m-5,x,flag);
        return;
    }
    else
    {
        cout<<m<<" ";
        flag = true;
        calculate(m+5,x,flag);
        return;
    }
    
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<n<<" ";
	    calculate(n-5,n,false);
	    cout<<endl;
	}
	
	return 0;
}
