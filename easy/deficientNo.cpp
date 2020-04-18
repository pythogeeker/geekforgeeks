#include <iostream>
using namespace std;
int divisorsSum(int n)
{
    int sum=0;
      for (int i=1;i<=n/2;i++)
	    {
	        if(n%i==0)
	        {
	            sum=sum+i;
	        }
	    }
	    return sum+n;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	   
	    if(divisorsSum(n)<2*n)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
