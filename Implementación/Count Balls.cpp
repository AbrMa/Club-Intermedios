#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	long long int n,a,b,ans,k,res;
	cin >> n >> a >> b;
	k = n / (a + b);
	res = n % (a + b);
	if (k >= 1)
	{
		if (res >= a)
			ans = k * a + a;
		else
			ans = k * a + res;
	}
	else
	{
		if (a >= n)
			ans = n;
		else
			ans = a;
	}
	cout << ans << endl;
	return 0;
}
