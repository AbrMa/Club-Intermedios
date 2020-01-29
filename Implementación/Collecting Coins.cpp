#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, a, b, c, n, may;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> n;
		if((a >= b) && (a >= c))
			may = a;
    		else if ((b >= a) && (b >= c))
			may = b;
    		else
			may = c;
		n -= (may - a);	
		n -= (may - b);	
		n -= (may - c);	
		if (n < 0)
			cout << "NO" << endl;
		else if (n % 3 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
