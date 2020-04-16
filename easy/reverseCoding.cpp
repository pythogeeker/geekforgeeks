#include <iostream>
using namespace std;
int sum;
int findSum(int n)
{
    if(n==0)
    return 0;
    return n +findSum(n-1);
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m,mul;
	    cin>>n>>m;
	    if(m==findSum(n))
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
