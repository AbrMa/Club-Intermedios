#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,c=0;
	string s,ans,sub;
	cin >> n >> s;
	for (int i = 0; i < n; i+=2)
	{
		sub = "";
		sub.push_back(s[i]);
		sub.push_back(s[i+1]);
		if (sub == "ab" || sub == "ba")
			ans.append(sub);
		else
		{
			ans.append("ab");
			c++;
		}
	}
	cout << c << endl << ans << endl;
	return 0;
}
