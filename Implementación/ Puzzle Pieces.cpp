#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		if (n > m)
			swap(n,m);
		if (n == 1)
			cout << "YES" << endl;
		else if (n == 2 && m == 2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
