#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int t, n;
	string s;
	cin >> t;
	while (t)
	{
		cin >> n >> s;
		vector<int> aux(n);
		//distance from left to right
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '1')
				aux[i] = i + 1;
			else
				aux[i] = 0;
		}
		//distance from right to left
		int steps = 0;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			steps++;
			if (aux[i] > 0)
				if (aux[i] < steps)
					aux[i] = (-1) * steps;
		}
		int max_distance = 0;
		for (int i = 0; i < s.size(); i++)
			if (abs(aux[i]) > max_distance)
				max_distance = abs(aux[i]);
		if (max_distance == 0)
			cout << s.size() << endl;
		else
			cout << (max_distance * 2) << endl;
		t--;
	}
	return 0;
}
