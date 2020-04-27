#include <iostream>
using namespace std;
int main() {
	long long int t,x,y,ans,a,b,aux;
	cin >> t;
	while (t--) {
		ans = 0;
		cin >> x >> y >> a >> b;
		if (y > x)
			swap(x,y);
		ans = a*(x+y);
		ans = min(ans,a*(x-y)+b*y);
		cout << ans << endl;
	}
	return 0;
}
