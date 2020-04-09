#include <iostream>
using namespace std;
int main()
{
	int h,a,n = 0;
	cin >> h >> a;
	while (h > 0)
	{
		h -= a;
		n++;
	}
	cout << n << endl;
	return 0;
}
