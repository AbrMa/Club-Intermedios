#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,exist=0;
	vector<int> ans;
	for (int i = 1; i < 10; i ++)
		for (int j = 1; j < 10; j++)
			ans.push_back(i*j);
	cin >> n;
	for (int i = 0; i < ans.size(); i++)
		if (ans[i] == n)
			exist = 1;
	if (exist)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
