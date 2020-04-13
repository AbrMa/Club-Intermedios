#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,rep = 0;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		if (p[i] != i + 1)
			rep++;
	}
	if (rep > 2)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
