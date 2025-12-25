#include<iostream>
using namespace std;
void sort(int* arr, int size);
int main() {
	cout << "Enter the number of integers: ";
	int n;
	cin >> n;
	int*p = new int[n];
	cout << "Enter " << n << " integers: ";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, n);
	cout << "The sorted integers are: ";
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	return 0;
}
void sort(int* arr, int size) {
	for (int i = 0; i < size;i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}