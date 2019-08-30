#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> sequence(n);
	for (int i = 0; i < n; i++)
		sequence[i] = i + 1;
	if (n <= 3)
		cout << "NO" << endl;
	else if (n >= 4 && n % 2 == 0)
	{
		cout << "YES" << endl;
		cout << "1 * 2 = 2" << endl;
		cout << "2 * 3 = 6" << endl;
		cout << "6 * 4 = 24" << endl;
		for (int i = 4; i < n; i+=2)
		{
			cout << sequence[i + 1] << " - " << sequence[i] << " = " << sequence[i + 1] - sequence[i] << endl;
			cout << "24 * 1 = 24" << endl;		
		}
	}
	else if (n >= 4 && n % 2 == 1)
	{
		cout << "YES" << endl;
		cout << "1 * 3 = 3" << endl;
		cout << "5 - 2 = 3" << endl;
		cout << "3 + 3 = 6" << endl;
		cout << "6 * 4 = 24" << endl;		
		for (int i = 6; i < n; i+=2)
		{
			cout << sequence[i] << " - " << sequence[i - 1] << " = " << sequence[i] - sequence[i - 1] << endl;
			cout << "24 * 1 = 24" << endl;		
		}

	}
	return 0;
}
