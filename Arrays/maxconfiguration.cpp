/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method*/
int max_sum(int A[],int n)
{
//Your code here

    int max=0;
    
    for (int i=0;i<n;i++)
    {
        int sum=0;
        
        for (int j=0;j<n;j++)
        {
            sum = sum + j*A[j];
        }
        
        if (max<sum)
            max = sum;
        
        int temp = A[n-1];
        for (int j=n-1;j>=1;j--)
        {
            A[j] = A[j-1];
        }
        A[0] = temp;
        
        
    }
    
    return max;
}
