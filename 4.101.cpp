#include<iostream>
using namespace std;
void func(int b[]);
int main() {
	int n[10];
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
	}
	func(n);
	return 0;
}
void func(int b[]) {
	int dis[10];
	dis[0] = b[0];
	int Count = 1;
	cout << "The distinct numbers are: ";
	for (int j = 1; j < 10; j++) {
		bool isDistinct = true;
		for (int i = j-1; i >= 0; i--) {
			if (b[j] == b[i])
			{
				isDistinct = false;
			}
		}
		if (isDistinct) {
			Count++;
			dis[Count - 1] = b[j];
		}
	}
	for (int k = 0; k < Count; k++) {
		cout << dis[k] << " ";
	}
	cout << endl;
}