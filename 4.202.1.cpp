#include<iostream>
#include<string>
using namespace std;
int indexof(const char*s1,const char*s2);
int main() {
	cout << "Enter the first string: ";
	string strr1, strr2;
	getline(cin, strr1);
	cout << "Enter the second string: ";
	getline(cin, strr2);
	char* p1 = &strr1[0];
	char* p2 = &strr2[0];
	cout << "indexof" << "(\"" << p1 << "\",\"" << p2 << "\")" << "is " << indexof(p1, p2);
	return 0;
}
int indexof(const char* s1, const char* s2) {
	int i = 0, j = 0;
	for (j; j < strlen(s2); j++) {
		if (s1[i] == s2[j]) {
			i++;
		}
		if (i == strlen(s1))break;
	}
	return i == strlen(s1) ? j - i + 1 : -1;
}