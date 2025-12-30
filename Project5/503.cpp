#include<iostream>
using namespace std;
class C {
private:
	double height;
	double length;
	double width;
	double volume;
public:
	int CalculateVolume(){
		return height * length * width;
	}
	C(double h, double l, double w) {
		height = h;
		length = l;
		width = w;
	}
	C() {
		height = 0;
		length = 0;
		width = 0;
	}
};
int main() {
	double h1, h2, h3, l1, l2, l3, w1, w2, w3;
	cout << "Please input three cubes: " << endl;
	cout << "lengths: ";
	cin >> l1 >> l2 >> l3;
	cout << "heights: ";
	cin >> h1 >> h2 >> h3;
	cout << "widths: ";
	cin >> w1 >> w2 >> w3;
	C c1(h1, l1, w1);
	C c2(h2, l2, w2);
	C c3(h3, l3, w3);
	cout << "v1 = " << c1.CalculateVolume() << endl;
	cout << "v2 = " << c2.CalculateVolume() << endl;
	cout << "v3 = " << c3.CalculateVolume() << endl;
}