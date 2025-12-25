#include<iostream>
using namespace std;
int find_number(int remainder,int day) {
	int i = day;
	if(i==1){
		return remainder;
	}
	else
	{
		remainder = (remainder + 1) * 2;
		return find_number(remainder, day - 1);
	}
}
int main() {
	int day = 10;
	int remainder = 1;
	cout << find_number(remainder, day) << endl;
	return 0;
}