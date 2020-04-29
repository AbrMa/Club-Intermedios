#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int letters[26] = {0},ans=0;	
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		letters[s[i] - (int)'A']++;
	for (int i = 0; i < 26; i++)
		ans = max(letters[i],ans);
	cout << ans << endl;
	return 0;
}
