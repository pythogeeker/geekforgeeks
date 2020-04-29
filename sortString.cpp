#include <iostream>
#include<map>
#include<algorithm>
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
	    std::map<char,int > m;
	    int n=str.size();
	    for(int i=0;i<n;i++)
	    {
	    	m[str[i]]=m[str[i]]+1;
	    }
	    
	    for (auto it = m.begin(); it!=m.end(); it++)
	    {
	    	int val=it->second;
	    	while(val)
	    	{
	    		cout<<(it->first);
	    		val--;
	    	}
	    }
	    cout<<endl;

	}
	return 0;
}
