#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int parseHex(const char* const hexString);
int main() {
	cout << "Enter a hex number: ";
	string strr;
	cin >> strr;
	char* p = &strr[0];
	cout << "The decimal value for hex number " << p << " is " << parseHex(p);
	return 0;
}
int parseHex(const char* const hexString) {
	int add = 0;
	for (int i = 0; i < strlen(hexString); i++) {
		char ch = hexString[i];
		if (isdigit(ch)) {
			add += int(ch - '0') * pow(16, strlen(hexString) - i - 1);
		}
		else if (ch < 'Z' && ch>'A') {
			add += int(ch - 'A' + 10) * pow(16, strlen(hexString) - i - 1);
		}
		else {
			add += int(ch - 'A' + 10) * pow(16, strlen(hexString) - i - 1);
		}
	}
	return add;
}