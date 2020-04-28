#include <iostream>
using namespace std;
void makeSeive(int n)
{
	bool isPrime[n + 1];
	for (int i = 0; i <= n; i++)
		isPrime[i] = true;
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i] == true)
			for (int j = i * i; j <= n; j = j + i)
				isPrime[j] = false;
	}
	for (int i = 1; i <= n; i++)
	{
	    if(i==1)
	    cout<<1<<" ";
		if (isPrime[i] ==true)
			cout << i << " ";
		else {
			for (int j = 2; j * j <= n; j++)
				if (i % j == 0)
					{
					    cout << j << " ";
					    break;
					}
		}
	}
	cout << endl;

}
int main() {

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		makeSeive(n);
	}
	return 0;
}
