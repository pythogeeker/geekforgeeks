#include <iostream>
using namespace std;
int fact(int n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int n, i;
		cin >> n;
		i = fact(n);
		cout << i << endl;
	}
}