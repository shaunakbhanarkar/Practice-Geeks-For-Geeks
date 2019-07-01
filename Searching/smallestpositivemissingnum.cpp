/*This is a function problem.You only need to complete the function given below*/
// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) { 
    
    // Your code here
    
    int size = 1000000;
    int a[size];
    
    for (int i=0;i<size;i++)
    {
        a[i]=0;
    }
    
    for (int i=0;i<n;i++)
    {
        if (arr[i]>0)
            a[arr[i]-1]++;
    }
    
    for (int i=0;i<size;i++)
    {
        if (a[i]==0)
            return i+1;
    }
    
} 
