#include<iostream>
using namespace std;
void bubble(double a[], int n);
int main() {
	const int num = 10;
	double list[num];
	cout << "Please enter ten numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	bubble(list, num);
	return 0;
}
void bubble(double a[], int n) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				changed = true;
			}
		}
	} while (changed);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}