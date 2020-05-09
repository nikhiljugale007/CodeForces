#include <iostream>
using namespace std;
int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (m * a <= b)
		cout << n * a << endl;
	else
	{
		int ans = (n / m) * b;
		n %= m;
		cout << ans + min(n * a, b) << endl;
	}
	return 0;
}