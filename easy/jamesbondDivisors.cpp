#include <iostream>
using namespace std;
int makeSeive(int n)
{
	bool isPrime[n + 1];
	int count = 0, i, j;
	for (i = 0; i < n + 1; i++)
		isPrime[i] = true;
	isPrime[0] = false;
	isPrime[1] = false;

	for (i = 2; i * i <= n; i++)
	{
		if (isPrime[i] == true)
			for (j = i * i; j <= n; j = j + i)
				isPrime[j] = false;
	}
	for (i = 1; i <= n; i++)
	{
		if (isPrime[i] == true)
		{
			count += 2;
			cout << "i is " << i << "Count is" << count << endl;
		}
		else
		{
			for (j = 1; j * j <= i; j++)
			{
				if (i % j == 0 && j * j != i)
				{
					count += 2;
					cout << "i is " << i << "count is" << count << endl;
				}
				if (i % j == 0 && j * j == i)
				{
					count += 1;
					cout << "i is " << i << "count is" << count << endl;
				}
			}
		}
	}
	return count;
}
int main() {
	//cod
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int n, i, j;
		cin >> n;
		i = makeSeive(n);
		cout << i << endl;

	}
	return 0;
}