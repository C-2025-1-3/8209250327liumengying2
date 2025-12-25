#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[]);
int main() {
	cout << "Enter a string: ";
	string strr;
	getline(cin, strr);
	char* p = &strr[0];
	int counts[26] = { 0 };
	count(p , counts);
	return 0;
}
void count(const char s[], int counts[]) {
	char ch;
	for (int i = 0; i < strlen(s); i++) {
		ch = tolower(s[i]);
		counts[ch - 'a']++;
	}
	for(int i=0;i<26;i++){
		if (counts[i] != 0) {
			cout << (char)(i + 'a') << ": " << counts[i] << " times" << endl;
		}
	}
}