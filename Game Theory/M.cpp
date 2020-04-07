#include <iostream>
using namespace std;
int main(){
	int t,n,m;	
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		if (((m - 1) % 4) ^ (n - 1) % 3))
			cout << "Tuzik";
		else
			cout << "Vanya";
		cout << endl;
	}
	return 0;
}
