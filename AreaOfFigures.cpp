#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	string figure;
	cin >> figure;
	double result = 0;
	if (figure=="square") {
		double side=0;
		cin >> side;
		result=side*side;
	}
	else if (figure == "rectangle") {
		double side1 = 0;
		cin >> side1;
		double side2 = 0;
		cin >> side2;
		result=side1*side2;
	}
	else if (figure == "circle") {
		double side = 0;
		cin >> side;
		double pi = 3.14159;
		result=side*side*pi;
	}
	else if (figure == "triangle") {
		double side = 0;
		cin >> side;
		double high=0;
		cin >> high;
		result=(side*high) / 2;
	}
	cout << fixed << setprecision(3) << result << endl;
	return 0;
}