
#include <iostream>
using namespace std;
int main() {
	int firstCompetitor;
	int secondCompetitor;
	int thirdCompetitor;
	int minutes = 0;
	cin >> firstCompetitor;
	cin >> secondCompetitor;
	cin >> thirdCompetitor;
	int seconds = firstCompetitor + secondCompetitor + thirdCompetitor;
	if (seconds>=0&&seconds<=59) {
		minutes += 0;
		cout << minutes<<":";
	}
	else if (seconds >= 60 && seconds <= 119) {
		seconds -= 60;
	     minutes += 1;
		cout << minutes<<":";
	}
	else if (seconds >= 120 && seconds <= 179) {
		seconds -= 120;
		 minutes += 2;
		cout << minutes << ":";
	}
	if (seconds<10)
	{
		cout << "0" << seconds << endl;
	}
	else {
		cout << seconds << endl;
	}
	return 0;
}
