#include <iostream>
using namespace std;
int sum(int n)
{
	return n * (n + 1) / 2;
}
int main()
{

	int n,m,ans;
	cin >> n >> m;
	ans = sum(n - 1) + sum(m - 1);
	cout << ans << endl;
	return 0;
}
