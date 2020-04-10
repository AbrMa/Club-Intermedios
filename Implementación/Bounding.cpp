#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n,x,bounces = 0;
	cin >> n >> x;
	vector<int> l(n);
	vector<int> d(n + 1);
	for (int i = 0; i < n; i++)
		cin >> l[i];
	d[0] = 0;
	for (int i = 1; i < n + 1; i++)
		d[i] = d[i - 1] + l[i - 1];
	for (int i = 0; i < n + 1; i++)
		if (d[i] <= x)
			bounces++;
	cout << bounces << endl;
	return 0;
}
