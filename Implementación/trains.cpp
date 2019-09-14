#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void calcula_trenes(int tam_binario)
{
	int num_ceros = tam_binario - 1;
	if (num_ceros % 2 == 0)
		cout << ((num_ceros / 2) + 1) << endl;
	else
		cout << ((tam_binario) / 2) << endl;
}

int main()
{
	int ceros = 0;
	string bin;
	cin >> bin;
	for (int i = 0; i < bin.size(); i++)
		if (bin[i] == '0')
			ceros++;
	if (bin.size() == 1 && bin[0] == '0')
		cout << 0 << endl;
	else
	{
		if (bin.size() - 1 == ceros)
			calcula_trenes(bin.size() - 1);
		else
			calcula_trenes(bin.size());

	}
	return 0;
}
