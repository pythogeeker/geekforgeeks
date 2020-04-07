#include <iostream>
using namespace std;

int main() {
	//code
    int T;
	cin>>T;
	while(T--)
	{
	    int x,g,res=0;
	    cin>>x>>g;
	    g=g-1;
	    x=x-g;
	    x=-x;
	    cout<<x<<endl;
	}
	return 0;
}
