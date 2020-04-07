#include <iostream>
using namespace std;
int stabsReq(int n)
{
    int count=0;
    while(n>0)
	    {
	        n=n&n-1;//using brian Karinghton's algorithm
	        count++;
	    }
	    return count;
	    
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,res=0;
	    cin>>n;
	    res=stabsReq(n);
	    cout<<res<<endl;
	    
	}
	return 0;
}
