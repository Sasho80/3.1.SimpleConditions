	#include <iostream>
	#include <algorithm>
	using namespace std;
	int main() {
		string word1;
		string word2;
		cin >> word1;
		transform(word1.begin(),  word1.end(), word1.begin(), ::tolower);
		cin >> word2;
		transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
		if (word1==word2) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
		return 0;
	}
