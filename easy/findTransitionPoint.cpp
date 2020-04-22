int transitionPoint(int arr[], int n) {
    // code here
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==1&&(mid==0||arr[mid-1]!=1))
         {
             return mid;
         }
        else if(arr[mid]>=1)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
    
    
}
