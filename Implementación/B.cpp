#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, m = 0;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	sort(a.begin(), a.end());
	int c = 0;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			c++;
	if (c == 2 || c == 0 )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
