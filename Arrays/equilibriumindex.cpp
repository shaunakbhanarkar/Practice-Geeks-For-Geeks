/*This is a function problem.You only need to complete the function given below*/
/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  for (int i=1;i<n-1;i++)
  {
      int sumleft = 0;
      int sumright = 0;
      
      for (int j=0; j<=i-1 ;j++)
      {
          sumleft = sumleft + A[j];
      }
      
      for (int j= i +1; j<=n-1 ; j++)
      {
          sumright = sumright + A[j];
      }
      
      if (sumleft == sumright)
        return i;
  }
  return -1;
}
