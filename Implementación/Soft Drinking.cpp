#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np,ans;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	ans = min((k*l)/nl, min(c*d, p/np)) / n;
	cout << ans << endl;
	return 0;
}
