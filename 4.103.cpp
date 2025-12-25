#include<iostream>
using namespace std;
void change_status(bool s[], int i);
int main() {
	bool status[100] = { 0 };
	for (int i = 2; i <= 100;i++ ) {
		change_status(status, i);
	}
	for (int i = 0; i < 100; i++) {
		if (!status[i]) {
			cout << (i + 1) << " ";
		}
	}
	return 0;
}
void change_status(bool s[],int i)
{
	for (int j = i-1; j < 100; j += i) {
		s[j] = !s[j];
	}
}
