#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a%b);}
int main()
{
	int t,a,b;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		if (gcd(a,b) == 1)
			cout << "Finite" << endl;
		else
			cout << "Infinite" << endl;
	}
	return 0;
}
