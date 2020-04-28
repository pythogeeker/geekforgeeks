#include <bits/stdc++.h>
using namespace std;
int divisorSum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
	    {
	  
	        if(n%i==0)
	        {
	            sum=sum+i;
	        }
	    }
	    return sum;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int sum=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(n%i==0)
	        {
	            sum=sum+divisorSum(i);
	        }
	    }
	    cout<<sum;
	    cout<<endl;
	}
	return 0;
}
