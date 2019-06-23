/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this function*/
int maxLen(int A[],int n)
{
  //Your code here
  
    int sum=0;
    int max=0;
    int len=0;
    
    for (int i=0;i<n-1;i++)
    {
        sum = A[i];
        
        for (int j=i+1 ; j<n;j++)
        {
            sum = sum + A[j];
            
            len = j-i+1;
        
        
        if (sum==0 && len>max)
            max = len;
        }
    }
    return max;
}
