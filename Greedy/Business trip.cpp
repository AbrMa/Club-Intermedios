#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int k, growth = 0, ans = 0;
	vector<int> month(12);
	cin >> k;
	for (int i = 0; i < 12; i++)
	       cin >> month[i];	
	sort(month.begin(), month.end());
	for (int i = 11; i >= 0 && k > growth; i--) 
		if (month[i] > 0)
		{
			ans++;
			growth += month[i];
		}
	if (k > growth)
		cout << "-1" << endl;
	else
		cout << ans << endl;
	return 0;
}
