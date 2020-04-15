#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,m,aux = 0,total_votes = 0;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		total_votes += a[i];

	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= ((double)total_votes/(4*m)))
			aux++;
	}
	if (aux >= m)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	return 0;
}
