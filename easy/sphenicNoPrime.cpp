#include <iostream>
#include<math.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,i;
	    cin>>n;
	    int flag=0;
	    int x=n;
	    int y=0;
	    for(i=2;i<=sqrt(x);i++)
	    {
	        int count=0;
	        if(n%i==0)
	        {
	            ++y;
	            while(n%i==0)
	            {
	                n=n/i;
	                ++count;
	              
	            }
	            if(count>1)
	            {
	                flag=1;
	                break;
	            }
	        }
	    }
	  
	    if(y==3&&flag==0)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	  
	    
	}
	return 0;
}
