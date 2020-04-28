#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int mul=1;
	    int x=n;
	    for(int i=2;i<=x;i++)
	    {
	        if(n%i==0)
	            {
	               mul=mul*i;
	               while(n%i==0)
	                n=n/i;
	            }
	    }
	    cout<<mul<<endl;
	}
	return 0;
}
