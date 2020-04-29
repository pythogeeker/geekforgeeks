#include<iostream>
#include<map>
using namespace std;
char Repeat(string str)
{
	std::map<char, int > frequency;
	for (int i = 0; i < str.length(); i++)
	{
		char mychar = str[i];
		frequency[mychar]++;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (frequency[str[i]] >= 2)
			return str[i];
	}
	
	return 0;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	    string str;
	    cin >> str;
	    char c = Repeat(str);
	    if(c==0)
	    cout<<-1<<endl;
	    else
	    cout << c << endl;
    }
}
