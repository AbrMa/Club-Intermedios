#include <iostream>
using namespace std;
int main()
{
	int n,ans=0,min=100000000,current;
	cin >> n;
	while (n--) {
		cin >> current;
		if (current <= min) {
			ans++;
			min = current; 	
		}
	}
	cout << ans << endl;
	return 0;
}
