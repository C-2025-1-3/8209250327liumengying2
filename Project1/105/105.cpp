#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double C;
	double T;
	cin >> C;
	T = (C - 32.0) * 5.0 / 9.0;
	cout << fixed << setprecision(2) << T;
	return 0;
}