#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int max_distance(int origin_city, int cityA, int cityB);
int min_distance(int origin_city, int cityA, int cityB);

int main()
{
	int n;
	cin >> n;
	vector<int> coordinate_axis(n);
	for (int i = 0; i < coordinate_axis.size(); i++)
		cin >> coordinate_axis[i];
	cout << min_distance(coordinate_axis[0], coordinate_axis[1], coordinate_axis[1]) << " " << max_distance(coordinate_axis[0], coordinate_axis[n - 1], coordinate_axis[n - 1]) << "\n"; 
	for (int i = 1; i < coordinate_axis.size() - 1; i++)
		cout << min_distance(coordinate_axis[i], coordinate_axis[i + 1], coordinate_axis[i - 1]) << " " << max_distance(coordinate_axis[i], coordinate_axis[0], coordinate_axis[n - 1]) << "\n";
	cout << min_distance(coordinate_axis[n - 1], coordinate_axis[n - 2], coordinate_axis[n - 2]) << " " << max_distance(coordinate_axis[n - 1], coordinate_axis[0], coordinate_axis[0]) << "\n";
	return 0;
}

int max_distance(int origin_city, int cityA, int cityB)
{
	return max(abs(origin_city - cityA), abs(origin_city - cityB));
}

int min_distance(int origin_city, int cityA, int cityB)
{
	return min(abs(origin_city - cityA), abs(origin_city - cityB));
}
