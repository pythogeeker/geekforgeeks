#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n,two=0,five=0,i;
	    cin>>n;
	    while(n)
	    {
	        i=n;
	        if(i%2==0)
	        {
	            while(i%2==0)
	            {
	                i=i/2;
	                two++;
	            }
	            
	        }
	        if(i%5==0)
	            {
	                while(i%5==0)
	                {
	                    i=i/5;
	                    five++;
	                }
	            }
	            --n;
	    }
	    if(two<=five)
	        cout<<two;
	    else
	        cout<<five;
	    cout<<endl;
	}
	return 0;
}
