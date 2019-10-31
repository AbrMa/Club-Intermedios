#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool valid(int number_of_cows, int min_distance, vector<int> cow_position);
int min_distance(vector<int> cow_position, int number_of_cows);

int main()
{
	int t, n, c;
	cin >> t;
	while (t--)
	{
		cin >> n >> c;
		vector<int> cow_position(n);
		for (int i = 0; i < n; i++)
			cin >> cow_position[i];
		sort(cow_position.begin(),cow_position.end());
		cout << min_distance(cow_position,c) << endl;
	}
	return 0;
}

bool valid(int number_of_cows, int min_distance, vector<int> cow_position)
{
	int cows_placed = 1, last_position = cow_position[0];
	for (int i = 1; i < cow_position.size() && cows_placed < number_of_cows; i++)
		if (cow_position[i] - last_position >= min_distance)
		{
			last_position = cow_position[i];
			cows_placed++;
		}
	if (cows_placed == number_of_cows)
		return true;
	return false;	
}
int min_distance(vector<int> cow_position, int number_of_cows)
{
	int l = 0, r = cow_position[cow_position.size() - 1] - cow_position[0];
	while (l < r)
	{
		int m = (l + r + 1) / 2;
		if (valid(number_of_cows,m,cow_position))
				l = m;
		else
			r = m - 1;
	}
	return l;
}
