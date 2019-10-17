#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
long long int oq(vector<long long int> a, long long int m);
long long int binary_search(vector<long long int> a, long long int k);
 
int main()
{
	long long int n, k;
	cin >> n >> k;
	vector<long long int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());	
	cout << binary_search(a,k) << endl;
	return 0;
}
 
long long int oq(vector<long long int> a, long long int m)
{
	long long int ones = 0;
	for (int i = (a.size() / 2); i < a.size(); i++)
		if (m >= a[i])
			ones += (m - a[i]);
	return ones;
}
 
long long int binary_search(vector<long long int> a, long long int k)
{
	long long int l = a[a.size() / 2], r = l + k;
	while (l < r)
	{
		long long int m = (l + r + 1) / 2;		
		if (oq(a,m) <= k)
			l = m;
		else
			r = m - 1;
	}
	return l;
}
