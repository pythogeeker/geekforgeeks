#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m;
	    cin>>n>>m;
	    n=n^m;
	    m=0;
	    while(n>0)
	    {
	        n=n&(n-1);
	        m++;
	    }
	    if(m==1)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
