#include<iostream>
#include"student.h"
using namespace std;
void Student::display() {
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}
Student::Student(int a, const char* b, char s) {
	num = a;
	strncpy_s(name, b, sizeof(name) - 1);
	name[sizeof(name) - 1] = '\n';
	sex = s;
}