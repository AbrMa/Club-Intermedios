#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
	int n,l,sum = 0,minFlavor,minIndex;
	cin >> n >> l;
	vector<int> apple(n);
	vector<int> flavor(n);
	for (int i = 0; i < n; i++)
	{
		apple[i] = i + l;
		flavor[i] = abs(apple[i]);
		sum += apple[i];
	}
	minFlavor = flavor[0];
	minIndex = 0;
	for (int i = 0; i < n; i++)
		if (flavor[i] < minFlavor)
		{
			minFlavor = flavor[i];
			minIndex = i;
		}
	cout << (sum - apple[minIndex]) << endl;
	return 0;
}
