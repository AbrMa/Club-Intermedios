#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	long long int n ,k, t, c;
	cin >> t;
	while (t)
	{
		c = 0;
		cin >> n >> k;
		while (n)
		{
			if (n % k == 0)
			{
				c++;
				n /= k;
			}
			else
			{
				c += (n % k);
				n -= (n % k);
			}
		}
		cout << c << endl;
		t--;
	}
	return 0;
}
