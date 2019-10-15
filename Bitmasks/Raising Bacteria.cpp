#include <iostream>
using namespace std;
int count_ones(int x);
int main()
{
	int x;
	cin >> x;
	cout << count_ones(x) << endl;
	return 0;
}
int count_ones(int x)
{
	int n = 0;
	while (x)
	{
		if (x & 1)
			n++;
		x >>= 1;
	}
	return n;
}
