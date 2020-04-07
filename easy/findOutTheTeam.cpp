#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,res=0;
	    cin>>n;
	    if(n==1)
	        cout<<1<<endl;
	    else
	    {
	        res=n>>1;
	        cout<<res<<endl;
	    }
	}
	
	return 0;
}
