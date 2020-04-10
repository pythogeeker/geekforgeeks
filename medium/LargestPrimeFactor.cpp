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
	    int x=n,max=0;
	    for(int i=2;i<=sqrt(x)+1;i++)
	    {
	  
	        if(n%i==0)
	        {
	            while(n%i==0)
	            {
	                n=n/i;
	            }
	           if(max<i)
	            max=i;
	        }
	    }
	    if(n!=1)
	    max=n;
	    cout<<max<<endl;
	}
	return 0;
}
