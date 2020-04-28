#include <iostream>
using namespace std;
#define int long long
int gcd(int a ,int b)
{
    if(a<b)
    return gcd(b,a);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int32_t main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m;
	    cin>>n>>m;
	    int i=gcd(n,m);
	    int mul=n*m;
	    cout<<mul/i<<" "<<i<<endl;
	    
	}
	return 0;
}
