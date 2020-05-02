#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,t;
	cin >> t;
	while(t--){
		cin >> n;
		long long int pot[31]={0},a=0,b=0;
		for (int i = 1; i <= 30; i++)
			pot[i] = 1 << i ;
		for (int i = 1; i <= (n/2) - 1; i++)
			a += pot[i];
		a += pot[n];
		for(int i = (n/2); i <= n - 1; i++)
			b += pot[i];
		cout << abs(a-b) << endl;
	}
	return 0;	
}
