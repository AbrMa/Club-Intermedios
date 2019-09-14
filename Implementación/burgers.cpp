#include <iostream>
using namespace std;
int biggest_profit(int possible_burgers, int expensive_burger_price, int expensive_burger_quantity, int cheap_burger_price, int cheap_burger_quantity);
int main()
{
	int t, b, p, f, h, c;
	cin >> t;
	while (t)
	{
		cin >> b >> p >> f >> h >> c;
		int possible_burgers = b / 2;
		if (h > c)
			cout << biggest_profit(possible_burgers,h,p,c,f) << endl;
		else
			cout << biggest_profit(possible_burgers,c,f,h,p) << endl;
		t--;
	}
	return 0;
}

int biggest_profit(int possible_burgers, int expensive_burger_price, int expensive_burger_quantity, int cheap_burger_price, int cheap_burger_quantity)
{
	int money = 0;
	while (possible_burgers && expensive_burger_quantity)
	{
		money += expensive_burger_price;
		possible_burgers--;
		expensive_burger_quantity--;
	}
	while (possible_burgers && cheap_burger_quantity)
	{
		money += cheap_burger_price;
		possible_burgers--;
		cheap_burger_quantity--;
	}
	return money;
}
