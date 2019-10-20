#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	long long int t, n ,m;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<long long int> p(n);
		for (int i = 0; i < n; i++)
			cin >> p[i];
		cin >> m;
		vector<long long int> q(m);
		for (int i = 0; i < m; i++)
			cin >> q[i];
		long long int even_p = 0, even_q = 0, odd_p = 0, odd_q = 0, ans;
		for (int i = 0; i < n; i++)
		{
			if (p[i] % 2 == 0)
				even_p++;
			else
				odd_p++;
		}
		for (int i = 0; i < m; i++)
		{
			if (q[i] % 2 == 0)
				even_q++;
			else
				odd_q++;
		}
		ans = (even_p * even_q) + (odd_p * odd_q);
		cout << ans << endl;
		t--;
	}
	return 0;
}
