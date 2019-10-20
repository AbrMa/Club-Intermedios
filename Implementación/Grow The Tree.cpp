#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	long long int op = 0, adj = 0;
	cin >> n;
	vector<long long int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	if (a.size() == 1)
		cout << (a[0] * a[0]) << endl;
	else
	{
        for (int i = 0 ; i < (a.size() / 2); i++)
            op += a[i];
        for (int i = (a.size() / 2) ; i < a.size(); i++)
            adj += a[i];
		op *= op;
		adj *= adj;
		cout << (op + adj) << endl;
	}	
	return 0;
}
