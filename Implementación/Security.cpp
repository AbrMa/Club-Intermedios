#include <iostream>
#include <string>
using namespace std;

int main()
{
	int flag = 0;
	string s;
	cin >> s;
	if (s[0] == s[1])
		flag = 1;
	if (s[1] == s[2])
		flag = 1;
	if (s[2] == s[3])
		flag = 1;
	if (flag == 1)
		cout << "Bad" << endl;
	else
		cout << "Good" << endl;
	return 0;
}
