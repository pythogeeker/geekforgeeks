#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m;
	    cin>>n>>m;
	    for(int i=n;i<m+1;i++)
	    {
	        if(i==2||i==3)
	        cout<<i<<" ";
	        else if (i>3)
	        {
	            int x=0;
	            for(int j=2;j<=i/2;j++)
	                if(i%j==0)
	                    x=1;
	            if(x==0)
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
