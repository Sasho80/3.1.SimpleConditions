#include <iostream>
#include <string>
using namespace std;
int main() {
	int num;
	int tens = 0;
	int units = 0;
	string str1;
	string str2;
	cin >> num;
	if (num >= 0 && num <= 9)
	{
		units = num % 10;
		switch (units) {
		case 0: str1 = "zero";
			break;
		case 1: str1 = "one";
			break;
		case 2: str1 = "two";
			break;
		case 3: str1 = "three";
			break;
		case 4: str1 = "four";
			break;
		case 5: str1 = "five";
			break;
		case 6: str1 = "six";
			break;
		case 7: str1 = "seven";
			break;
		case 8: str1 = "eight";
			break;
		case 9: str1 = "nine";
			break;
		}
		cout << str1 << endl;
	} 	else if (num >= 10 && num <= 100) {
		tens = num / 10;
		units = num % 10;
			if (num>=10&&num<=19)
			{
				switch (tens * 10 + units) {
				case 10: str2 = "ten";
					break;
				case 11: str2 = "eleven";
					break;
				case 12: str2 = "twelve";
					break;
				case 13: str2 = "thirteen";
					break;
				case 14: str2 = "fourteen";
					break;
				case 15: str2 = "fifteen";
					break;
				case 16: str2 = "sixteen";
					break;
				case 17: str2 = "seventeen";
					break;
				case 18: str2 = "eighteen";
					break;
				case 19: str2 = "nineteen";
					break;
				}
			}
			else if (num >= 20 && num <= 100)
			{
				tens = num - units;
				switch (tens) {
				case 20: str2 = "twenty";
					break;
				case 30: str2 = "thirty";
					break;
				case 40: str2 = "forty";
					break;
				case 50: str2 = "fifty";
					break;
				case 60: str2 = "sixty";
					break;
				case 70: str2 = "seventy";
					break;
				case 80: str2 = "eighty";
					break;
				case 90: str2 = "ninety";
					break;
				default: str2 = "one hundred";
					break;
				}
				switch (units) {
				case 1: str1 = "one";
					break;
				case 2: str1 = "two";
					break;
				case 3: str1 = "three";
					break;
				case 4: str1 = "four";
					break;
				case 5: str1 = "five";
					break;
				case 6: str1 = "six";
					break;
				case 7: str1 = "seven";
					break;
				case 8: str1 = "eight";
					break;
				case 9: str1 = "nine";
					break;
				}
			}
	}if (tens >= 1 && units == 0 || tens == 1 && units > 0) {
		cout << str2 << endl;
	}else if (tens>=2&&units>0) {
		cout<<str2 <<" "<< str1<< endl;
	}
	return 0;
}


