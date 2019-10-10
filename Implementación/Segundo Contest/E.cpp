#include <iostream>
using namespace std;
int main()
{
	long long int t,k,p,n,res;
	cin >> t;
	while (t)
	{
		cin >> k >> p >> n;
		res = k - p;
		if (res <= 0)
			cout << "0" << endl;
		else
			cout << res*n << endl;
		t--;
	}
	return 0;
}
