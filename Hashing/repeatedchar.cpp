#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	   int min = s.size();
	   
	   for (int i=0;i<s.size()-1;i++)
	   {
	       for (int j=i+1; j<s.size() ; j++)
	       {
	           if (s[i]==s[j] && min>j)
	           {
	               min = j;
	               break;
	           }
	       }
	       if (i+1>min)
	       {
	           break;
	       }
	   }
	   
	   if (min == s.size())
	    cout<<-1<<endl;
	    
	    else
	    cout<<s[min]<<endl;
	   
	}
	
	return 0;
}
