#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	int grid[3][3],n,aux,bingo=0;	
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> grid[i][j];
	cin >> n;
	unordered_set<int> number;
	while (n--) {
		cin >> aux;
		number.insert(aux);
	}
	if (number.count(grid[0][0]) && number.count(grid[0][1]) && number.count(grid[0][2]))
		bingo = 1;
	if (number.count(grid[1][0]) && number.count(grid[1][1]) && number.count(grid[1][2]))
		bingo = 1;
	if (number.count(grid[2][0]) && number.count(grid[2][1]) && number.count(grid[2][2]))
		bingo = 1;
	if (number.count(grid[0][0]) && number.count(grid[1][0]) && number.count(grid[2][0]))
		bingo = 1;
	if (number.count(grid[0][1]) && number.count(grid[1][1]) && number.count(grid[2][1]))
		bingo = 1;
	if (number.count(grid[0][2]) && number.count(grid[1][2]) && number.count(grid[2][2]))
		bingo = 1;
	if (number.count(grid[0][0]) && number.count(grid[1][1]) && number.count(grid[2][2]))
		bingo = 1;
	if (number.count(grid[0][2]) && number.count(grid[1][1]) && number.count(grid[0][1]))
		bingo = 1;
	if (bingo)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
