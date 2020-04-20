#include <iostream>
using namespace std;
int main() {
	int n,m,sum=0,a;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a;
		sum += a;
	}
	if (n - sum >= 0)
		cout << (n - sum) << endl;
	else
		cout << "-1" << endl;
	return 0;
}
