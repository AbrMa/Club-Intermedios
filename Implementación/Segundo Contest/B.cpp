#include <iostream>
#include <vector>
using namespace std;
void print_pairs(vector<int> a)
{
	int b = 0;
	for (int i = 0; i < a.size(); i++)
	{
		
		if (a[i] == i + 1)
			cout << a[i];
		if (b == 0)
		{
			cout << " ";
			b = 1;
		}
		else
		{
			cout << endl;
			b = 0;
		}
	}
	if (a.size % 2 == 1)
	{
		cout << a[0] << " " << a[n.size() - 1] << endl;
	}
}
int main()
{
	int n, fixed;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (a[i] == i+1)
			fixed++;
	if (fixed == 0)
		cout << "0" << endl;
	else
	{
		if (fixed % 2 == 0)
		{
			cout << (fixed/2) << endl;
			print_pairs(a);
		}
		else
		{
			cout << ((fixed / 2 ) + 1) << endl;
			print_pairs(a);
		}
	}
	return 0;
}
