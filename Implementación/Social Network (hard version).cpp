#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int M[100];
void fillA()
{
	for (int i = 0; i < 100; i++)
		M[i] = 0;
}
int main()
{
	int n,m,ans=0;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cin >> m;
	vector<int> B(m);
	for (int i = 0; i < m; i++)
		cin >> B[i];
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	for (int i = 0; i < n; i++)
	{
		int aux = 0;
		for (int j = 0; j < m && aux == 0; j++)
		{
			if (max(A[i],B[j]) - min(A[i],B[j]) <= 1 && M[j] == 0)
			{
				M[j] = 1;
				aux = 1;
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
