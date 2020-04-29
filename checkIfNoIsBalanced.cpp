#include <iostream>
#include<string>

using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    string str;
	    cin>>str;
	    int n=str.size();
        int low=0,high=n-1,i;
        int sum=0,sum1=0,sum2=0;
            int mid=n/2;
            for(i=0;i<mid;i++)
                sum1=sum1+str[i]-'0';
            for(i=mid+1;i<n;i++)
                sum2=sum2+str[i]-'0';
            sum=sum2-sum1;
            
            if(sum==0)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        
	}
	return 0;
}
