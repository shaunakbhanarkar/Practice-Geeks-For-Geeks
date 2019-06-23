/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    //Your code here
    
    for (int i=0;i<=n-k;i++)
    {
        vector<int> v(k);
        
        for (int j=i;j<i+k;j++)
        {
            v[j-i]=A[j];
        }
        
        int count=k;
        sort(v.begin(),v.end());
        
        for (int j=0;j<k-1;j++)
        {
            if(v[j]==v[j+1])
                count--;
        }
        cout<<count<<" ";
    }
}
