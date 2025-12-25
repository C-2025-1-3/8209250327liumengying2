#include<iostream>
using namespace std;
void calculate(int x, int y,int &gcd,int &lcm ) {
	int i = x, j = y;
	int t = x > y ? x : y;
	y = x < y ? x : y;
	x = t;
	if (y == 0)cout << "Error" << endl;
	int ans = y;
	while (x % y != 0) {
		y = x % y;
		x = ans;
	}
	gcd = y;
	lcm = (i * j) / gcd;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int gcd, lcm;
	calculate(a, b, gcd, lcm);
	cout << gcd << endl;
	cout<<lcm << endl;
	return 0;
}