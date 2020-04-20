#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int arr[n][n],i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        cin>>arr[i][j];
	    }
	    int low,high;
        for(i=0;i<n;i++)
         {
         for(j=i+1;j<n;j++)
            swap(arr[i][j],arr[j][i]);
           }
       for(i=0;i<n;i++)
        {
           low=0,high=n-1;
           while(low<high)
            {
                swap(arr[i][low],arr[i][high]);
                low++,high--;
            }
        }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
