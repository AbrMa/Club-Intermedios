#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	int sum = 0;
	for (auto num : a)
		sum += num;
	if ((sum % 2 == 0) && (sum - a[n - 1] >= a[n - 1]))
			cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
