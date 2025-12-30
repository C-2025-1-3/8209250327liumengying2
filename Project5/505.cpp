#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")";
	}
};
int main() {
	Point p;
	cout << "p";
	p.display();
	p.setPoint(20, 30);
	cout <<endl<< "after setting: p";
	p.display();
	return 0;
}