#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	double r, h;
	double V;
	cin >> r >> h;
	V = (PI * r * r * h) / 3;
	cout << "volume:" << V;
	return 0;
}