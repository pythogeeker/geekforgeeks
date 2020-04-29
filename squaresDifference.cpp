#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	   long long int n;
	    cin>>n;
	    long long int diff=(n*(n+1)*(3*n+2)*(1-n))/12;
	    if(diff<0)
	        diff=-diff;
	    cout<<diff<<endl;
	}
	return 0;
}
