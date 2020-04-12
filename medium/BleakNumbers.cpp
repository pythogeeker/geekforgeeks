#include <iostream>
using namespace std;
int countSetBits(int n)
{
    int count =0;
    while(n>0)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,x=0;
	    cin>>n;
	    for(int i=1;i<n;i++)
	    {
	        if(i+countSetBits(i)==n)
	            x=1;
	    }
	    if(x==1)
	    cout<<0<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
