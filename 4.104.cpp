#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
int list3[160] = { 0 };
int main() {
	int size1, size2;
	int list1[80];
	int list2[80];
	cout << "Enter list1: ";
	cin >> size1;
	for (int i = 0; i < 80; i++) {
		cin >> list1[i];
		if (cin.peek() == '\n') {
			break;
		}
	}
	cout << "Enter list2: ";
	cin >> size2;
	for (int i = 0; i < 80; i++) {
		cin >> list2[i];
		if (cin.peek() == '\n') {
			break;
		}
	}
	merge(list1, size1, list2, size2, list3);
	return 0;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	for (k; k < size1 + size2&&i<size1&&j<size2; k++) {
		if (list1[i] > list2[j]) {
			list3[k] = list2[j];
			j++;
		}
		else {
			list3[k] = list1[i];
			i++;
		}
	}
	if (i == size1) {
		for (j; j < size2; j++,k++) {
			list3[k] = list2[j];
		}
	}
	if (j == size2) {
		for (i; i < size1; i++,k++) {
			list3[k] = list1[i];
		}
	}
	cout << "The merged list is ";
	for (int m = 0; m < size1 + size2; m++) {
		cout << list3[m] << " ";
	}
}
