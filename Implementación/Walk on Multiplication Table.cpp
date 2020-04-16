#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long int n,ans;
	cin >> n;
	ans = n - 1;
	for (int i = 1; i <= 1000000; i++)
		if (n % i == 0)
			ans = min(ans, i + n/i - 2);
	cout << ans << endl;
	return 0;
}
