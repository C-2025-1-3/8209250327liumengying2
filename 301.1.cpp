#include<iostream>
using namespace std;
int gcd(int x, int y) {
	int t = x > y ? x : y;
	y = x < y ? x : y;
	x = t;
	if (y == 0)cout << "Error" << endl;
	int ans = y;
	while (x % y != 0) {
		y = x % y;
		x = ans;
	}
	return y;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout <<"(1)." << gcd(a, b) << endl;
	return 0;
}