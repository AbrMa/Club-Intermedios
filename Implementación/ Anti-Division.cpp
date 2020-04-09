#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b) 
{ 
	if (b == 0) return a; 
	return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b)
{
	return (a*b)/gcd(a,b);
}

int main()
{
	long long int a,b,c,d,rB,rA;
	cin >> a >> b >> c >> d;
	rB = b/c + b/d - b/lcm(c,d);
	rA = (a-1)/c + (a-1)/d - (a-1)/lcm(c,d);
	a--;
	cout << (b - a) - (rB - rA)<< endl;
	return 0;
}
