#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	cin >> n;
	vector<int> d(n);
	for (int i = 0; i < n; i++)
		cin >> d[i];
	sort(d.begin(),d.end());
	k = d[n/2] - d[n/2 - 1];
	cout << k << endl;
	return 0;
}
