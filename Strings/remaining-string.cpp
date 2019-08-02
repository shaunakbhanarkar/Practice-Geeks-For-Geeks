#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    char c;
	    int n;
	    
	    int count = 0;
	    
	    cin>>s;
	    cin>>c;
	    cin>>n;
	    bool flag = false;
	    for (int i=0;i<s.size();i++)
	    {
	        if (count == n)
	        {
	            cout<<s[i];
	            flag = true;
	        }
	        else
	        {
	            if (s[i] == c)
	            {
	                count++;
	            }
	        }
	    }
	    
	    if (count != n || flag == false)
	    {
	        cout<<"Empty string";
	    }
	        
	   cout<<endl;
	    
	}
	return 0;
}
