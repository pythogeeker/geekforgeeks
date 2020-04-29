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
	    int sum=0;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    if(sum%3==0)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
