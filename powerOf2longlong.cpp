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
	    if(n==0)
	    cout<<"NO"<<endl;
	    else if(!(n&(n-1)))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
