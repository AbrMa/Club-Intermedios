#include <iostream>
#include <vector>
using namespace std;
int main(){
	int g,n,res;
	cin >> g;
	while (g--)
	{
		cin >> n;
		vector<int> pile(n);
		for (int i = 0; i < n; i++)
			cin >> pile[i];
		if (n == 1)
			cout << "First";
		else
		{
			res = pile[0];
			for (int i = 1; i < n; i++)
				res ^= pile[i];	
			if (res)
				cout << "First";
			else 
				cout << "Second";
		}
		cout << endl;
	}
	return 0;
}
