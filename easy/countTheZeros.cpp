#include <iostream>
using namespace std;
int countZeros(int arr[],int n,int l,int h)
{
        int mid=l+(h-l)/2;
        if(l>h)
            return -1;
        if(arr[mid]==0&&(mid==0||arr[mid-1]!=0))
            return mid;
        else if(arr[mid]<=0)
            return countZeros(arr,n,l,mid-1);
        return countZeros(arr,n,mid+1,h);
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,i;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	        cin>>arr[i];
	    i=countZeros(arr,n,0,n-1);
	    if(i==-1)
	    cout<<0<<endl;
	    else
	    cout<<n-i<<endl;
	}
	return 0;
}
