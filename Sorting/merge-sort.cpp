/*This is a function problem.You only need to complete the function given below*/
/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
     // Your code here
     /* hack method
     
     vector<int> v;
     
     for (int i=l; i<=r;i++)
     {
         v.push_back(arr[i]);
     }
     
     sort(v.begin(),v.end());
     
     for(int i=l;i<=r;i++)
     {
        arr[i] =    v[i-l];
    }
    
    */
    
    int a[m-l+1];
    int b[r-m];
    
    for (int i=l;i<=m;i++)
    {
        a[i-l] = arr[i];
    }
    
    for (int i=m+1; i<=r;i++)
    {
        b[i-m-1] = arr[i];
    }
    
    int x=0,y=0,z=l;
    while(x<=m-l && y<=r-m-1)
    {
        if (a[x] < b[y])
        {
            arr[z] = a[x];
            x++;
            z++;
        }
        
        else
        {
            arr[z] = b[y];
            y++;
            z++;
        }
    }
    
    if (x > m-l)
    {
        while(y <=r-m-1)
        {
            arr[z] = b[y];
            z++;
            y++;
        }
    }
    else
    {
        while(x <=m-l)
        {
            arr[z] = a[x];
            z++;
            x++;
        }
    }
    
    
     
     
     
}
