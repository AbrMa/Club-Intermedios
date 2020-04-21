#include <iostream>
using namespace std;
int main() {
	long long int sum=0,n;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		if (!(i % 3 == 0 || i % 5 == 0 || i % 15 == 0))
			sum += i;
	cout << sum << endl;
	return 0;
}
