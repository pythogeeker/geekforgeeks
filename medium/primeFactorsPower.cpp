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
	    int x=n;
	    for(int i=2;i<=sqrt(x)+1;i++)
	    {
	  
	        int count=0;
	        if(n%i==0)
	        {
	            while(n%i==0)
	            {
	                n=n/i;
	                ++count;
	            }
	            cout<<i<<" "<<count<<" ";
	        }
	    }
	    if(n!=1)
	    cout<<n<<" "<<1;
	    cout<<endl;
	}
	return 0;
}
