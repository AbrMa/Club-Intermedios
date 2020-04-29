#include <iostream>
using namespace std;
int main()
{
	int nums[1000000] = {0},n,i;
	cin >> n;
	for (int j = 1; j <= n-1; j++)
	{
		cin >> i;
		nums[i]++;
	}
	for (int i = 1; i <= n ; i++)
		if (!nums[i])
			cout << i << endl;
	return 0;
}
