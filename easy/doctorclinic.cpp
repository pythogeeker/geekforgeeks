#include <iostream>
using namespace std;
int waitTime(int n,int t)
{
    if(n==0)
        return 0;
    
    // total time taken for n-1 patients
    int time=(n-1)*10;
    //time after which last patient arrives
    int last=(n-1)*t;
    int wait=time-last;
    return wait;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,t;
	    cin>>n>>t;
	    cout<<waitTime(n,t)<<endl;
	}
	return 0;
}
