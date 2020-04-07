#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	cin >> n >> a >> b;
	if ((a+b) % 2 == 0)
		cout << "Alice";
	else
		cout << "Borys";
	cout << endl;
	return 0;
}
