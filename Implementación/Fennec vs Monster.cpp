#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	long long int n,k,sum = 0;
	cin >> n >> k;
	vector<int> h(n);
	for (int i = 0; i < n; i++)
		cin >> h[i];
	sort(h.begin(),h.end());
	for (int i = 0; i < n - k; i++)
		sum += h[i];
	cout << sum << endl;
	return 0;
}
