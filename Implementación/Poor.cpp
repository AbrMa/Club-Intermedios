#include <iostream>
using namespace std;
int main()
{
	int a,b,c,poor=0;
	cin >> a >> b >> c;
	if (a == b && c != a)
		poor = 1;
	else if (a == c && b != a)
		poor = 1;
	else if (b == c && b != a)
		poor = 1;
	if (poor)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
