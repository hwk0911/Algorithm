#include <iostream>
#include <string>
using namespace std;

int main() {
	string longword;
	string shortword = "";

	cin >> longword;
	shortword += longword.at(0);

	for (int i = 0; i < longword.size(); i++) {
		if (longword.at(i) == '-')
			shortword += longword.at(i + 1);
	}
	cout << shortword;
}

/*
Input 1:
Knuth-Morris-Pratt

Output 1:
KMP
*/