#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long int n,sum = 0;
	cin >> n;
	vector<int> a(n + 1);
	vector<int> b(n);
	for (int i = 0; i < n + 1; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	for (int i = 0; i < n; i++)
	{
		//ith town
		if (a[i] >= b[i])
		{
			sum += b[i];
			a[i] -= b[i];
			b[i] = 0;
		}
		else
		{
			sum += a[i];
			b[i] -= a[i];
			a[i] = 0;
		}
		//ith + 1 town
		if (a[i + 1] >= b[i])
		{
			sum += b[i];
			a[i + 1] -= b[i];
			b[i] = 0;
		}
		else
		{
			sum += a[i + 1];
			b[i] -= a[i + 1];
			a[i + 1] = 0;
		}

	}
	cout << sum << endl;
	return 0;
}
