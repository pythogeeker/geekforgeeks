#include <iostream>
using namespace std;
int find(int n)
{
    for(int i=1;2*i<=n;i++)
        if(i*(i+1)==n)
            return 1;
        return 0;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    n=2*n;
	    cout<<find(n)<<endl;
	}
	return 0;
}
