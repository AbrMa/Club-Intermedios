#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int N,K,ans=0;
	cin >> N >> K;
	while (N) {
		N /= K;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
