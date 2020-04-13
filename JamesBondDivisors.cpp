#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,i,j;
	    cin>>n;
	    long int count=0;
	    for(i=1;i<=n;i++)
	    {
	        
	        for(j=2;j<=i/2;j++)
	        {
	            if(i%j==0)
	            count++;
	        }
	        if(j!=1&&j!=2)
	        count+=2;
	        if(j==2)
	        count++;
	        
	    }
	    if(n==1||n==2)
	    cout<<count+n<<endl;
	    else
	    cout<<count<<endl;
	    
	}
	return 0;
}
