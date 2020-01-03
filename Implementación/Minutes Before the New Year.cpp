#include <iostream>
#include <vector>
using namespace std;
int hours_to_minutes(long long int hours)
{
	return hours * 60;
}
int main()
{
	int t, h, m, ans;
	cin >> t;
	while (t--)
	{
		ans = 0;
		cin >> h >> m;
		h = 23 - h; 
		ans += 60 - m;
		ans += hours_to_minutes(h);
		cout << ans << endl;
	}
	return 0;
}
