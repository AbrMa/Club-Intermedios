#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int abc[26];
		for (int i = 0; i < 26; i++) abc[i] = 0;
		string s;
		cin >> s;
		s.push_back('.');
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] != s[i+1])
				abc[(int)(s[i] - 'a')]++;
			else
				i++;
		}
		for (int i = 0; i < 26; i++)
			if (abc[i])
				cout << char(int('a') + i);
		cout << endl;
	}
	return 0;
}
