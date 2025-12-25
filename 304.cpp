#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double size1, size2, size3;
	cin >> size1 >> size2 >> size3;
	if (is_valid(size1, size2, size3)) {
		cout << "The area is: " << area(size1, size2, size3) << endl;
	}
	else {
		cout << "Invalid triangle sides." << endl;
	}
	return 0;
}