#include<iostream>
#include<vector>
using namespace std;
int count_min(int n);
void ans(int n, int k);
void sequence(int n, int k);
vector<int> powers_of_two;
int main()
{
	int n, k;
	cin >> n >> k;
	ans(n,k);
	return 0;
}
int count_min(int n)
{
	int ones = 0, i = 0;
	while (n)
	{
		if (n & 1)
		{
			ones++;
			powers_of_two.push_back(1 << i);
		}
		i++;
		n >>= 1;
	}
	return ones;
}
void ans(int n, int k)
{
	if (count_min(n) <= k && k <= n)
	{
		cout << "YES" << endl;
		sequence(n,k);
	}
	else
		cout << "NO" << endl;
}
void sequence(int n, int k)
{
	int i = 0;
	while (powers_of_two.size() < k && i < powers_of_two.size())
	{
		if (powers_of_two[i] > 1)
		{
			powers_of_two[i] /= 2;
			powers_of_two.push_back(powers_of_two[i]);
		}
		else
			i++;
	}
	for (int j = 0; j < powers_of_two.size(); j++)
	       cout << powers_of_two[j] << " ";	
	cout << endl;
}
