#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	int i = 0, j = n - 1; 
	long long int sum = 0;
	while (i < j)
	{
		sum += (a[i] + a[j])*(a[i] + a[j]);
		i++;
		j--;
	}
	cout << sum << endl;
	return 0;
}
