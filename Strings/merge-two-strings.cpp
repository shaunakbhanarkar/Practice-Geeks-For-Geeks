#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s1;
	    string s2;
	    
	    cin>>s1;
	    cin>>s2;
	    
	    int index1 = 0;
	    int index2 = 0;
	    
	    while(index1 < s1.size() && index2 < s2.size())
	    {
	        cout<<s1[index1];
	        cout<<s2[index2];
	        index1++;
	        index2++;
	    }
	    
	    if (index1 == s1.size())
	    {
	        while(index2 < s2.size())
	        {
	            cout<<s2[index2];
	            index2++;
	        }
	    }
	    else
	    {
	        while(index1 < s1.size())
	        {
	            cout<<s1[index1];
	            index1++;
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}
