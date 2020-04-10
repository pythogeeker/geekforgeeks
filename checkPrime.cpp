#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int x=0;
	    for(int i=2;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	           x=1;
	    }
	    if(x!=1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
