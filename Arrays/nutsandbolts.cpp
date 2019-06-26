#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     
     while(t--)
     {
         int n ;
         cin>>n;
         
         int a[9] = {0,0,0, 0,0,0,  0,0,0};
         
         /* 
         *  ! # $ % & * @ ^ ~
         *  a0   !
         *  a1   #
         *  a2   $
         *  a3   %
         *  a4   &
         *  a5   *
         *  a6   @
         *  a7   ^
         *  a8   ~
         */
         
         for (int i=0;i<n;i++)
         {
             char c;
             cin>>c;
             
             if (c == '!')  a[0] = 1;
             else if (c == '#') a[1] = 1;
             else if (c == '$') a[2] = 1;
             else if (c == '%') a[3] = 1;
             else if (c == '&') a[4] = 1;
             else if (c == '*') a[5] = 1;
             else if (c == '@') a[6] = 1;
             else if (c == '^') a[7] = 1;
             else if (c == '~') a[8] = 1;
         }
         for (int i=0;i<n;i++)
         {
             char c;
             cin>>c;
         }
         
         for (int j = 0 ; j < 2 ; j++)
         {
             
                 if (a[0] == 1) cout<<"! ";
                 if (a[1] == 1) cout<<"# ";
                 if (a[2] == 1) cout<<"$ ";
                 if (a[3] == 1) cout<<"% ";
                 if (a[4] == 1) cout<<"& ";
                 if (a[5] == 1) cout<<"* ";
                 if (a[6] == 1) cout<<"@ ";
                 if (a[7] == 1) cout<<"^ ";
                 if (a[8] == 1) cout<<"~ ";
                cout<<endl;   
         }
     }
	//code
	return 0;
}
