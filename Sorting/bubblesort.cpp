/*This is a function problem.You only need to complete the function given below*/
//User function Template for C
/* The task is to complete bubble() which is used 
   in below bubbleSort() */
/* Function to sort an array in ascending order using
   bubble sort
void bubbleSort(int arr[], int n)
{
   int i;
   for (i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} */
void bubble(int arr[], int i, int n)
{
    // Your code here  
    for (int k=0; k<n-1-i; k++)
    {
        if (arr[k]>arr[k+1])
        {
            int temp = arr[k];
            arr[k] = arr[k+1];
            arr[k+1] = temp;
        }
    }
}
