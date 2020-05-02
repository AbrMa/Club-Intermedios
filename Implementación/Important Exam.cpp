#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n,m,sum=0;
	cin >> n >> m;
	vector<string> s(n);
	vector<int> ans(m);
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
		cin >> ans[i];
	for (int i = 0; i < m; i++)
	{
		int a = 0, b = 0, c = 0, d = 0, e = 0;
		for (int j = 0; j < n; j++)
		{
			if (s[j][i] == 'A') a += ans[i];	
			if (s[j][i] == 'B') b += ans[i];	
			if (s[j][i] == 'C') c += ans[i];	
			if (s[j][i] == 'D') d += ans[i];
			if (s[j][i] == 'E') e += ans[i];	
		}
		sum +=  max(a,max(b,max(c,max(d,e))));
	}
	cout << sum << endl;
	return 0;
}
