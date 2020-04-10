#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    for(int i=1;i<n+1;i++)
	    {
	        if(i==1||i==2||i==3)
	        cout<<i<<" ";
	        else if (i>3)
	        {
	            for(int j=2;j<=i;j++)
	                if(i%j==0)
	                    {
	                        cout<<j<<" ";
	                        break;
	                    }
	            
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
