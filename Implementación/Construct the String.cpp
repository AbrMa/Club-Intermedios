#include <iostream>
using namespace std;
int main() {
	int t,n,a,b;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b;
		int i = 0;
		while (n) {
			//create a - b  number of a's
			int i = 0, c = (int)'a';
			while (i <= a - b && n) {
				i++;
				n--;	
				printf("%c",c);
			}
			c++;
			//create b diferent characters
			i = 0;
			while (i < b - 1 && n) {
				i++;
				n--;
				printf("%c",c);
				c++;
			}
		}
		cout << endl;
	}	
	return 0;
}
