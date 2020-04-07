#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int a, b, found = 0;
	cin >> a >> b;
	for (int i = 1; i <= 1010 && found == 0; i++)
	{
		if ((i * 8) / 100 == a  && (i * 10) / 100 == b)
		{
			found = 1;
			cout << i << endl;
		}
	}
	if (found == 0)
		cout << "-1" << endl;
	return 0;
}
