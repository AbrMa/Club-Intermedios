#include <iostream>
using namespace std;
int main() {
	long long int n,ans=0;
	cin >> n;
	ans += 1000 * (n / 500); 
	n -= 500 * (n / 500); 
	ans += 5 * (n / 5);
	cout << ans << endl;
	return 0;
}
