#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int h,n,sum = 0;
	cin >> h >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	if (sum >= h)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
	return 0;
}
