/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
long long minDist(long long arr[], long long n, long long x, long long y)
{  
    long long j=INT_MAX,k=INT_MIN;
    
    long long min = INT_MAX;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
            j=i;
        }
        
        else if (arr[i]==y)
        {
            k=i;
        }
        
        long long temp = j-k;
        if (temp <0)
        {
            temp = - temp;
        }
        
        if (min > temp)
            min = temp;
        
        
    }
    //add code here.
    if (min>n-1)
        return -1;
    return min;
}
