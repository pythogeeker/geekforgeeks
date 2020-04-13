#include <iostream>
#include<math.h>
using namespace std;

int main() {

	int T,i;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	     int x=n;
	     int y=0;
	    for(i=2;i<=sqrt(x)+1;i++)
	    {
	        int count=0;
	        if(n%i==0)
	        {
	            while(n%i==0)
	            {
	                n=n/i;
	                ++count;
	            }
	              y=count;
	        }
	      
	    }
	    if(y>1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

