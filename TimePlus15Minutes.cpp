#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int hh;
	int mm;
	cin >> hh;
	cin >> mm;
	mm += 15;
	if (hh <=23 && mm <= 59) {
			cout << hh << ":" << mm << endl;
	}
	else if (hh < 23 && mm>59)
	{
		hh = hh + 1;
		mm = abs(60 - mm);
		if (mm < 10)
		{
			cout << hh << ":" << "0" << mm << endl;
		}
		else
		{
			cout << hh << ":" << mm << endl;
		}
	}
	else if (hh >= 23 && mm > 59) {
		hh = hh - 23;
		mm = abs(60 - mm);
		if (mm < 10)
		{
			cout << hh << ":" << "0" << mm << endl;
		}
		else
		{
			cout << hh << ":" << mm << endl;
		}
	}
	else if (hh > 23 && mm <= 59)
	{
		hh = 0;
			cout << hh << ":" << mm << endl;
	}
	return 0;
}