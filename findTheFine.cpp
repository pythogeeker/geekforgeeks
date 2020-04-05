#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,d;
	    cin>>n>>d;
	    int car[n];
	    int penalty[n];
	    for(int i=0;i<n;i++)
	    cin>>car[i];
	    for(int i=0;i<n;i++)
	    cin>>penalty[i];
	    int sum=0;
	    if(d%2==0)
	    {
	        for(int i=0;i<n;i++)
	         if(car[i]%2!=0)
	           sum+=penalty[i];
	    }
	    else
	     for(int i=0;i<n;i++)
	         if(car[i]%2==0)
	           sum+=penalty[i];
	   cout<<sum<<endl;
	}
	return 0;
}
