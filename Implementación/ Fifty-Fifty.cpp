#include <iostream>
#include <string>
using namespace std;
int main()
{
	int upCase[26],ans = 0;
	for (int i = 0; i < 26; i++)
		upCase[i] = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		upCase[s[i] - 'A']++;
	for (int i = 0; i < 26; i++)
		if (upCase[i] == 2)
			ans++;
	if (ans == 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
