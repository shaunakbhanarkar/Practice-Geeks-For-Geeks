/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
int findExtra(int a[],int b[],int n)
{
 //add code here.
 
 for (int i=0;i<n-1;i++)
 
 {
     if (a[i]!=b[i])
        return i;
 }
 
 return n-1;
}
