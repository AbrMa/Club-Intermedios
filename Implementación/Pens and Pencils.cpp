#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t,a,b,c,d,k;
	cin >> t;
	while (t)
	{
		cin >> a >> b >> c >> d >> k;
		int x = 0, y = 0;
		while (a > 0)
		{
			a -= c;
			x++;
		}

		while (b > 0)
		{
			b -= d;
			y++;
		}
		if ((x + y) <= k)
			cout << x << " " << y << endl;
		else
			cout << "-1" << endl;
		t--;
	}
	return 0;
}
