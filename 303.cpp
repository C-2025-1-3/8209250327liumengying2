#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	double cei;
	cout << "Please enter a temperature in Celsius: ";
	cin >> cei;
	cout <<setprecision(4)<< cei << " Celsius is " << celsius_to_fah(cei) << " Fahrenheit." << endl;
	double fah;
	cout << "Please enter a temperature in Fahrenheit: ";
	cin >> fah;
	cout << setprecision(4) << fah << " Fahrenheit is " << fahrenheit_to_cels(fah) << " Celsius." << endl;
	return 0;
}