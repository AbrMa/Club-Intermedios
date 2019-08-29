#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	vector<double> real_numbers(n);
	vector<int> answer(n);
	for (int i = 0; i < real_numbers.size(); i++)
	{
		cin >> real_numbers[i];
		answer[i] = (int)floor(real_numbers[i]);
		sum += answer[i];
	}
	for (int i = 0; i < answer.size() && sum != 0; i++)
	{
		if (!(floor(real_numbers[i]) == real_numbers[i]))			
		{
			if (sum < 0)
			{
				answer[i]++;
				sum++;
			}
		}
	}
	for (auto a : answer)
		cout << a << endl;
	return 0;
}
