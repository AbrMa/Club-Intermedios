#include <iostream>
using namespace std;
int main() {
	double w,h,x,y,area,cx,cy;
	int different_ways = 0;
	cin >> w >> h >> x >> y;
	area = w * h / 2.0;
	cx = w / 2.0;
	cy = h / 2.0;
	if (cx == x && cy == y)
		different_ways = 1;
	printf("%f %d \n", area, different_ways); 
	return 0;
}
