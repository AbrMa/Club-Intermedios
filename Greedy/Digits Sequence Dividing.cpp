#include<iostream>
#include<string>
using namespace std;

int main()
{
	int queries, n;
	cin >> queries;
	string sequence;
	while (queries)
	{
		cin >> n;
		cin >> sequence;
		if (sequence[0] >= sequence[1] && sequence.size() == 2)
			cout << "NO" << endl;	
		else
		{
			cout << "YES" << endl;
			cout << "2" << endl;
			cout << sequence[0] << " ";
			for (int i = 1; i < sequence.size(); i++)
				cout << sequence[i];
			cout << endl;
		}
		queries --;
	}
	return 0;
}
