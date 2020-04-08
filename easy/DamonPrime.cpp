#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    if(n==1||n==2||n==3)
	    cout<<"No"<<endl;
	    else
	    {
	        int x=0;
	    for(int i=2;i<=(n-1)/2;i++)
	    {
	        if((n-1)%i==0)
	            x=1;
	    }
	    if(x==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	    }
	}
	return 0;
}
