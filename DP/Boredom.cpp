#include<iostream>
#include<vector>
using namespace std;

long long int n, pene;
vector<long long int> cubeta(100005, 0);
vector<long long int> mem(100005, 0);
vector<bool> vis(100005, false);

long long int dp(long long int ind)
{
	if (ind >= 100005) return 0;
	if (vis[ind] == true) return mem[ind];
	vis[ind] = true;
	long long int si = (cubeta[ind] * ind) + dp(ind + 2);
       	long long int no = dp(ind + 1);
	mem[ind] = max(si, no);	
	return mem[ind];
}

int main()
{
	cin >> n;
	for (long long int i = 0; i < n; i++)
	{
		cin >> pene;
		cubeta[pene]++;
	}
	cout << dp(0) << endl;
	return 0;
}
