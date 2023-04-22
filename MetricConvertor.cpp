#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main() {
	double size;
	cin >> size;
	string sourceMetric;
	cin>>sourceMetric;
	transform(sourceMetric.begin(), sourceMetric.end(),
		sourceMetric.begin(), ::tolower);
	string destMetric;
	cin>>destMetric;
	transform(destMetric.begin(), destMetric.end(),
		destMetric.begin(), ::tolower);
	
	if (sourceMetric == "km") {
		size = size / 0.001 ;
	}
	if (sourceMetric == "mi") {
		size = size / 0.000621371192;
	}
	if (sourceMetric == "yd") {
		size = size / 1.0936133;
	}
	if (sourceMetric == "mm") {
		size = size / 1000;
	}
	if (sourceMetric == "cm") {
		size = size / 100;
	}
	if (sourceMetric == "in") {
		size = size / 39.3700787;
	}
	if (sourceMetric == "ft") {
		size = size / 3.2808399;
	}
	if (destMetric == "ft") {
		size= size*3.2808399;
	}
	if (destMetric == "in") {
		size = size * 39.3700787;
	}
	if (destMetric == "km") {
		size = size * 0.001;
	}
	if (destMetric == "cm") {
		size = size * 100;
	}
	if (destMetric == "mm") {
		size = size * 1000;
	}
	if (destMetric == "yd") {
		size = size * 1.0936133;
	}
	if (destMetric == "mi") {
		size = size * 0.000621371192;
	}
	cout << size << " " << destMetric << endl;
	return 0;
}