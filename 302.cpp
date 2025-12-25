#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0)return false;
	}
	return true;
}
int main()
{
	int j = 0;
	for (int i = 1;; i++) {
		if (is_prime(i)) { 
			{
				cout << i << "\t"; 
			}
			j++;
			if (j % 10 == 0)cout << endl;
			if (j == 200)break;
		}
	}
	return 0;
}