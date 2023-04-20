#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	float BonusScore = 0.0f;
	if (num<=100) {
		BonusScore += 5;
	}
	 if (num>1000){
		BonusScore = num * 0.10f;
	}
	 if(num>100&&num<1000) {
		BonusScore = num * 0.20f;
	}
	 if (num%10==5)
	{
		BonusScore +=2;
	}
	 if(num%2==0) {
		BonusScore += 1;
	}
	//BonusScore 
	cout << BonusScore << endl;
	//TotalScore
	cout<< num + BonusScore << endl;
	return 0;
}